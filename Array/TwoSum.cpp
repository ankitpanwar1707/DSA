# Brute Force Method using loops: Time complexity=O(n^2)  Space complexity=O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;i<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return {-1,-1};
    }
};


# Optimized Approach Using Hash Map: Time Complexity=O(n)   Space Complexity=O(n) 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numToIndex.find(complement) !=
                numToIndex.end()) { // numToIndex.find(complement{7,1}  &&  !=
                                    // numToIndex.end() returns  // Key exists
                                    // in the map
                //(numToIndex.find(complement) == numToIndex.end()) Complement
                //does not exist in the map
                ans.push_back(
                    numToIndex[complement]); // eg: ans.ush_back(map[Element])
                                             // returns index.
                ans.push_back(i);
                return ans;
            }
            numToIndex[nums[i]] = i;
        }

        return {-1, -1};
    }
};


# Optimized Approach(using two-pointer): 

Time Complexity: O(N) + O(N*logN), where N = size of the array.
Reason: The loop will run at most N times. And sorting the array will take N*logN time complexity.

Space Complexity: O(1) as we are not using any extra space.


#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}
        
                         
                                OR

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        vector<pair<int,int>> numWithIndex;
        for(int i=0;i<nums.size();i++){
            numWithIndex.push_back({nums[i],i});
        }
        sort(numWithIndex.begin(),numWithIndex.end());
        int left=0, right=numWithIndex.size()-1;
        while(left<right){
            int sum=numWithIndex[left].first+numWithIndex[right].first;
            if(sum==target){

                //vector<pair<int, int>> numWithIndex = {{2, 0}, {7, 1}, {11, 2}, {15, 3}};
                //numWithIndex[left].first(Element)=2, numWithIndex[left].second(index)=0                               
                return {numWithIndex[left].second,numWithIndex[right].second};
            }
            else if(sum<target){
                left++;
                right--;
            }
            
        }
        return {-1,-1};
    }
};


 