#include<iostream>
using namespace std;

int main()
{
	int n=4;
	
	int a[9][2]={0},b[5]={2,4,5,1,2};
	
//	for(int i=0;i<5;i++)
//	{
//		if(a[b[i]]==0)
//		{
//			cout<<b[i]<<" Emp ";
//			a[b[i]]=b[i];
//			a[b[i]][0]=i;
//			cout<<endl;
//		}
//		else{
//			cout<<"$";
//		}
//	}
//	
//	cout<<endl;
   for(int i=0;i<9;i++)
   {
   	    a[i][0]={0};  a[i][1]={0};
   }
	
	for(int i=0;i<9;i++)
	{
		a[i][0]=i+1;
		cout<<a[i][0]<<" "<<a[i][1]<<endl;
	}
}
