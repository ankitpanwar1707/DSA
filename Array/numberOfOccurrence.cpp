// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 vector <int> numberOfOccurrence(vector <int> & arr,int target){
        vector <int> ans ={-1,-1};
        if(arr.empty()) return ans;
        int left =0, right = (arr.size())-1;
        while(left<= right){
            int mid = left +(right - left)/2;
            if(arr[mid]>=target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        if(left>arr.size() || arr[left]!= target){
            return ans;
        }
        ans[0]=left;
        
        right = (arr.size())-1;
        while(left<= right){
         int mid = left +(right - left)/2;
         if(arr[mid]<= target){
             left = mid+1;
         }
         else{
             right = mid-1;
         }
        }
        ans[1]=right;
        return ans;
    }
int main() {
   vector <int> arr={1,3,4,4,4,4,4,5,6};
   int target  = 4;
   vector <int> ans = numberOfOccurrence(arr,target);
   
   if(ans[0]==-1){
       cout<<"Target is not found!";
   }
   else{
      int count = ans[1] - ans[0]+1;
      cout<<"First Target Occurrence at:"<<ans[0]<<",Last Target Occurrence at:"<<ans[1];
      cout<<endl;
      cout<<"Number of Target Occurrence:"<<count;
   }

    return 0;
}