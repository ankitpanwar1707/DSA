#include<iostream>
using namespace std;
bool binarySearch(int *arr,int low,int high,int key){
    if(low>high){
        return false;
    }
   int mid=low+(high-low)/2;
   if(arr[mid]==key){
     return true;  }
   else if(arr[mid]>key){
     return binarySearch(arr,low,mid-1,key);   
      }
   else {
    return binarySearch(arr,mid+1,high,key);
        }
  return false;
}
int main(){
  int size,key;
  cout<<"Enter The Size:";
  cin>>size;
  int arr[size];
  cout<<"Enter The Numbers:";
  for(int i=0;i<size;i++){
      cin>>arr[i];
}
cout<<"Enter The Key:";
cin>>key;
bool ans = binarySearch(arr,0,size-1,key);
if(ans){
  cout<<key<<" is found!";
 }
else{
   cout<<key<<" is not found!";
 }
return 0;
}