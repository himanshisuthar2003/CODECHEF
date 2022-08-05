#include<bits/stdc++.h> 
using namespace std;

int main(){
    array<int,5>arr={1,2,3,4,5};
    for(int*arr1 = arr.begin(); arr1!=arr.end(); arr1++){
        cout<<*arr1<<" ";
    }
   
    for(auto it = arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
  for(auto it = arr.rbegin(); it!=arr.rend(); it++){
        cout<<*it<<" ";
    }
    array<int,5>arr={1,2,3,4,5};
 for (auto element : arr){
    cout<<element;
 }

 string sc="thyui";
 cout<<sc;
 for(char element : sc){
    cout<<element;
 }
    return 0;
}