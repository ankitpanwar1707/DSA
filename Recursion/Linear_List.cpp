#include<iostream>
using namespace std;
bool lineraSearch(int *arr,int size,int key){
    if(size==0)
       return false;
    else if(arr[0]==key){
         return true;
    }
   return  lineraSearch(arr+1,size-1,key);
}
int main(){
    int size,key;
    cout<<"Enter Size:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter Key to Find:";
    cin>>key;
    int ans = lineraSearch(arr,size,key);
    if(ans){
        cout<<key<<" is found!";
    }
    else{
        cout<<key<<" not found!";
    }
    return 0;
}