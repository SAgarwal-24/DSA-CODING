#include <iostream>
#include <stack>
#include <string>
using namespace std;

void swap(int i,int j,int a[])
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}
void print(int a[])
{
	for(int i=0;i<9;i++)
	cout<<a[i]<<" ";
}
int partition(int a[],int s,int e)
{
   int p=a[e];
   int pind=0;
   cout<<s<<e;
   for(int i=0;i<e;i++)
   {
   	  if(a[i]<p)
   	  {
   	  	cout<<" before swap: "; print(a); cout<<endl;
   	  	swap(pind,i,a);
   	  	cout<<" after swap: "; print(a); cout<<endl<<endl;
   	  	pind++;
	  }
	  
	 
   }
    swap(pind,e,a);
   return pind;
}
void quicksort(int a[],int s,int e)
{
	if(s<e)
	{
		int l=partition(a,s,e);
		quicksort(a,s,l-1);
		quicksort(a,l+1,e);
	}
	else
	return;
}

int main()
{
	int a[9]={1,34,3,2,21,12,45,19,4};
	int l=sizeof(a)/sizeof(a[0]);
	//print(a); cout<<endl;
	// select partition  make left sublist and right sublist with reference to pivot
	quicksort(a,0,8);
	
	cout<<endl;
	print(a);
}
