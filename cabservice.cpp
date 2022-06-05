#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,t;
	cin>>t;
	for(int i=0; i<t; i++){
	    cout<<"enter two  cab services prize"<<endl;
	    cin>>a>>b;
	    if(a<b){
	        cout<<"first"<<endl;
	        }
	    else if (a==b){
	        cout<<"any"<<endl;
	       }
	    else{
	        cout<<"second"<<endl;
	       }
	}
	return 0;
}
