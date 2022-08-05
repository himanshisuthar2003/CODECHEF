#include<bits/stdc++.h> 
using namespace std;
int linearsearch(int arr[],int size,int key){
    for(int i = 0; i<=size-1; i++){
        if (key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[6]={9,2,4,5,3,8};
    int output = linearsearch(array,6,5);
    cout<<output<<endl;
    
    return 0;
}