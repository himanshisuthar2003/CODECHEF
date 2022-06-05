#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,t;
    cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    if(x>y)
	    {cout<<(x-y)<<endl;}
	    else if(y>x)
	    {cout<<(y-x)<<endl;}
	    else 
	    {cout<<(x-y)<<endl;}
	}
	return 0;
}
