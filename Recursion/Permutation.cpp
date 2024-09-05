#include<iostream>
using namespace std;

void permute(string &str,int l,int r,vector <string>&ans){
    if(l==r){
        ans.push_back(str);
        return;
    }
    else{
        for(int i=l;i<=r;i++){
          swap(str[l],str[i]);
          permute(str, l+1, r,ans);
          swap(str[l],str[i]);
        }
    }
}

vector<string> findPermutations(string &s){
    vector<string> ans;
    permute(s,0,s.length()-1,ans);
    return ans;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
private:
       void solve(vector<int>& nums,int l,int r,vector<vector<int>> &ans){
        if(l==r){
            ans.push_back(nums);
            return;
        }
        else{
            for(int i=l;i<=r;i++){
                swap(nums[l],nums[i]);
                solve(nums,l+1,r,ans);
                swap(nums[l],nums[i]);
            }
        }
       }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums,0,nums.size() - 1,ans);
        return ans;
    }
};