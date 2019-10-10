#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t,i,j,k,l;
	string str;
	
	cin>>t;
	
	while(t--)
	{
	    stack<string>s;
	    string r="";
	    
	    cin>>str;
	    l=str.length();
	    
	    for(i=0;i<l;i++)
	    {
	        if(str[i]!='.' )
	        r=r+str[i];
	        else
	        {
	            s.push(r);
	            r="";
	        }
	    }
	    s.push(r);
	    while(!s.empty())
	    {
	        cout<<s.top();
	        
	        if(s.size()!=1)
	        cout<<".";
	        
	        s.pop();
	    }
	    cout<<endl;
	  
	}
	
	return 0;
}
