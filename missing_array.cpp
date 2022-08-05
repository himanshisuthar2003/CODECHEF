#include<bits/stdc++.h> 
using namespace std;
 int missing(int arr[],int size){
    int item;
    for( int i = 0; i<=size-1;i++){
    if(i+1==arr[i]){
      arr[i]=i+1;
      continue;   
    }
    else{
        item = i+1;
        break;
        cout<<item;
    }
    }
    return -1;
 }
int main(){
    int array[6]={1,2,3,5,6,7};
    int output = missing(array,6);
    
    return 0;
}