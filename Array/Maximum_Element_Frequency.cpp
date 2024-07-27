#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[],int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout<<"Element:\t"<<x.first<<"Frequency:"<<x.second<<endl;
    }
} 
int main(){
    int size,n;
    cout<<"Enter Size of Array:";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter The Elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        cout<<" ";
    }
    frequency(arr.data(),size);
    return 0;
}