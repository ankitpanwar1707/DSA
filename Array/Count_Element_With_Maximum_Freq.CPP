#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        int maxFreq = 0;
        for(auto x: count){
            if (x.second > maxFreq) {
                maxFreq = x.second;
            }
        }

        return maxFreq;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 2, 2, 4, 3, 3, 4, 4, 4};
    cout << "Maximum Frequency: " << solution.maxFrequencyElements(nums) << endl;
    return 0;
}
