// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isSorted(int *arr,int size){
    
    // base case
    if(size==0 || size==1)
      return true;
      
    if(arr[0] > arr[1])
        return false;
    else{
        bool remainingPart = isSorted(arr +1,size-1);
            return remainingPart;
    }
} 


int main() {
    int a[]={2,4,6,10,9};
    int size=5;
    bool ans = isSorted(a,size);
    if(ans){
        cout<<"Array is Sorted!";
    }
    return 0;
}