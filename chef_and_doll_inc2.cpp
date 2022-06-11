#include <iostream>
using namespace std;
//write your code here

void doll(){
    int n ,j,x;
     cin>>n;
      int r = 0;
	for(j=0;j<n;j++ ){
           

            cin>>x;
            r= r^x;
            
            
        }
        cout<<r<<endl;
    }
int main() {

	int t;
    cin>>t;
    

    while(t--){

        doll();
    }
	return 0;
}
