#include<bits/stdc++.h> 
using namespace std;
int gcd(int a,int b){
    if (a==b)
    {return a;}
    else {
        if (a>b){
            int x = gcd(a,a-b);
            return x;
        }
        else {
            int y = gcd(b,b-a);
            return y;

        }
    }

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}