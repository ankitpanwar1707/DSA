#SayDigit 
i/p -> 123    o/p -> one two three

#include <bits/stdc++.h>
using namespace std;
void sayDigit(int n,string arr[]){
    if(n==0)
      return ;
     int digit=n%10;
     n=n/10;
     sayDigit(n,arr);
     cout<<arr[digit]<<" ";
}

int main() {
    int n;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cout<<"Enter Number:";
    cin>>n;
    if(n==0){
        cout<<arr[0];
    }
    else{
    sayDigit(n,arr);}
    return 0;
}