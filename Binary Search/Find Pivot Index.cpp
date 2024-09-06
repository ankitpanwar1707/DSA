class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int i=0;i<nums.size();i++){
             totalSum = totalSum+nums[i];
        }
        int leftSum = 0;
        for(int i=0;i<nums.size();i++){
            if(leftSum == totalSum - leftSum - nums[i]){
                return i ;
            }
           leftSum =  leftSum+nums[i];
        }
        return -1;
    }
};