#include<iostream>
#include<string>
using namespace std;
void print(int *a,int l);
void mer(int a[],int l,int m)
{
	print(a,l);
	
}
void print(int *a,int l)
{
	for(int i=0;i<l;i++)
	cout<<a[i]<<" ";
}
int main()
{
	
	int a[5]={1,2,3,4,5};
	
	print(a,5);
	cout<<endl;
	mer(a,5,6);
//	int a=5,b=14;
//	if(a<10)
//	cout<<"#";
//	else
//	cout<<"@";
//	
//	cout<<endl;
//	char ch=(a<10?'#':'@');
//	string c=((a<10 && b<10)?"TT":"");
//	cout<<c<<endl;
//	cout<<ch;
//    int l=3,r=6;
//    int m = l+(r-l)/2; 
//    int n=(l+r)/2;
//    cout<<m<<" "<<n;
}
