class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        int maxFreq = 0;

        for(auto & x : map){  //auto& x means x is a reference to each element in map.
                              //This approach avoids copying the elements and allows modification of elements if needed.
          maxFreq = max(maxFreq,x.second);
        }

        int totalFreq = 0;

        for(auto& x : map){
            if(x.second == maxFreq){
                totalFreq = totalFreq + x.second;
            }
        }
         return totalFreq;
    }
};

int main() {
    Solution solution;

    // Test case 1
    vector<int> test1 = {1, 2, 2, 3, 1, 4};
    int result1 = solution.maxFrequencyElements(test1);
    cout << "Total frequency of elements with maximum frequency in test1: " << result1 << endl; // Expected output: 4

    // Test case 2
    vector<int> test2 = {1, 2, 3, 4, 5};
    int result2 = solution.maxFrequencyElements(test2);
    cout << "Total frequency of elements with maximum frequency in test2: " << result2 << endl; // Expected output: 5

    return 0;
}
