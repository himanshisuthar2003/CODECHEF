#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x,t,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
	     int r=0;

        for(j=0;j<n;j++ ){
            cin>>x;
            r= r^x;
            
            
        }
        cout<<r<<endl;
    }
	return 0;
}