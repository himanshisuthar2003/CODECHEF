#include <iostream>
using namespace std;
void doll(){
    int n ,j,x;
     cin>>n;
	for(j=0;j<n;j++ ){
            int r = 0;

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
