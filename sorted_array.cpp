#include<bits/stdc++.h> 
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end )/2;
    while(start<=end){
        if( arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int array[6]={1,2,3,5,6,8};
    int output = binarysearch(array,6,5);
    cout<<output<<endl;
    
    return 0;
}