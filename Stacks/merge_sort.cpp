#include <iostream>
#include <stack>
#include <string>
using namespace std;

void print(int *a,int l);
void merge(int *left,int *right,int *a,int ls,int rs)
{
	int k=0;
	int i=0,j=0;
	
	while(i<ls && j<rs)
	{
		if(left[i]<=right[j])
		{
			a[k]=left[i];
			i++;
		}
		else if(left[i]>right[j])
		{
			a[k]=right[j];
			j++;
		}
		k++;
	}
	
	while(i<ls)
	{
			a[k]=left[i];
			i++;
			k++;
	}
	
	while(j<rs)
	{
			a[k]=right[j];
			j++;
			k++;
	}
}

void mergesort(int *a,int l)  // recursion
{
	
	if(l<2) return;
	// divide and merge
	int ls=l/2;
	int rs=l-ls;
	
	int left[ls]={};
	int right[rs]={};
	
	// fill left and right array
	for(int i=0;i<ls;i++)
	{
		left[i]=a[i];
	}
	cout<<"left: "; print(left,ls);  cout<<endl;
	for(int i=ls;i<(l);i++)
	{
		//cout<<a[i]<<" ";
		right[i-ls]=a[i];
		//cout<<right[rs-i]<<" ";
	}
	//cout<<endl;
	cout<<"right: "; print(right,l-ls);  cout<<endl<<endl;
	mergesort(left,ls);
	mergesort(right,rs);
	merge(left,right,a,ls,rs);
}

void print(int a[],int l)
{
	for(int i=0;i<l;i++)
	cout<<a[i]<<" ";
}

int main()
{
	int a[]={1,34,3,2,2,21,12,45,45,19,4,5};
	
	int l=sizeof(a)/sizeof(a[0]);
    cout<<endl;	print(a,l); cout<<endl;
	
	mergesort(a,l);
	cout<<endl; print(a,l);
	cout<<endl;
	print(a,l);
}
