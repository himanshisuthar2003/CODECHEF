#include<bits/stdc++.h> 
using namespace std;
struct him{
    
    int a;
    char b;
    him(int x1,char x2){
        a=x1;
        b=x2;
        cout<<a<<b;
    }
};
int main(){
   struct him himanshi( 9 ,'n');
    //   him himanshi;
    // himanshi.a = 1;
    // himanshi.b = 'b';
    cout<<himanshi.b<<himanshi.a;

    return 0;
}