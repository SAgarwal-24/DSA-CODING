#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool left(char ch)
{
    if(ch=='{' || ch=='[' || ch=='(')
     return true;
    return false;
}

bool right(char ch)
{
    if(ch=='}' || ch==']' || ch==')')
     return true;
    return false;
}


int main() {
	
	int i,t,k,l,f=0;
	string str;

	
	cin>>t;  
	//cout<<t<<endl;
	
	while(t--)
	{
	    cin>>str;
	    l=str.length();
	    
	    stack<char>s;
	    s.push('N');
	    
	    //cout<<l<<endl;
	    for(i=0;i<l;i++)
	    {
	        f=0;
	        
	        //cout<<"##  "<<str[i]<<endl;
	        
	        if( (left(str[i]))) // left para
	        {
	            if( (s.top()=='N') )
	            s.push(str[i]);
	            else if( left(s.top()))
	            s.push(str[i]);
	        }
	        else if(right(str[i])) // right para
	        {
	            //cout<<str[i]<<endl;
	            if(str[i]=='}')
	            {
	                if(s.top()=='{')
	                {
	                    s.pop(); 
	                }
	                else if(s.top()=='(' || s.top()=='['){
	                    f=1;
	                    cout<<"not balanced"<<endl;
	                    break;
	                }
	                else{
	                    s.push(str[i]);
	                }
	            }
	            
	            if(str[i]==')')
	            {
	                if(s.top()=='(')
	                {
	                    s.pop();
	                   
	                }
	               else if(s.top()=='{' || s.top()=='['){
	                    f=1;
	                    cout<<"not balanced"<<endl;
	                    break;
	                }
	                else{
	                    s.push(str[i]);
	                }
	            }
	            
	            if(str[i]==']')
	            {
	                if(s.top()=='[')
	                {
	                    s.pop();
	       
	                }
	                 else if(s.top()=='(' || s.top()=='['){
	                     f=1;
	                    cout<<"not balanced"<<endl;
	                    break;
	                }
	                else{
	                    s.push(str[i]);
	                }
	            }
	        }
	    }
	    
	    if(f==0)
	    if(s.top()=='N')
	    cout<<"balanced"<<endl;
	    else
	    cout<<"not balanced"<<endl;
	    
	   // while(s.top()!='N')
	   // {
	   //     cout<<s.top()<<" ##\n";
	   //     s.pop();
	   // }
	}
	
	return 0;
}
