#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x , y,t,i;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>x>>y;
	    if(x>y){
	        cout<<"YES"<<endl;
	    }
	    else if(x<y){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
