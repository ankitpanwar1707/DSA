class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        if (nums.empty()) return ans;

        int left = 0, right = nums.size() - 1;

        // Find the first occurrence of the target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (left >= nums.size() || nums[left] != target) {
            return ans; // Target not found
        }
        ans[0] = left;

        // Reset right pointer for the second binary search
        right = nums.size() - 1;

        // Find the last occurrence of the target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        ans[1] = right;

        return ans;
    }
};
