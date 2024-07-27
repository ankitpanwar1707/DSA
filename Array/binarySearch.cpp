#include<iostream>
using namespace std;
bool binarySearch(int *arr,int size,int key){
    int low=0,high=size-1;
    while(low<=high){
         int mid = low + (high - low) / 2;
        if(arr[mid]==key){
            return true;
        }
        else if(arr[mid]>key){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
    }
    return false;
}
int main(){
    int size,key;
    cout<<"Enter The size of Array:";
    cin>>size;
    int arr[size];
    cout<<"Enter The numbers:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Key:";
    cin>>key;
    bool ans=binarySearch(arr,size,key);
    if(ans){
        cout<<key<<" is found!";
    }
    else{
        cout<<key<<" is not found!";
    }
    return 0;
}