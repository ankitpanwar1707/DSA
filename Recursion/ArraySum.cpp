#include<iostream>
using namespace std;
int arraySum(int *arr,int size){
    if(size==0)
       return 0;
       
    return arr[0]+ arraySum(arr+1,size-1);
}
int main(){
    int n,size;
    cout<<"Enter The Size of Array:";
    cin>>size;
    int arr[size];
    cout<<"Enter The Numbers:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Sum="<<arraySum(arr,size);
    return 0;
}