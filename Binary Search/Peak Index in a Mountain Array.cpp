#include <vector>
#include <iostream>

using namespace std;

int findPeakIndexInMountainArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // Move to the right half if the mid element is less than its next element
            left = mid + 1;
        } else {
            // Move to the left half if the mid element is greater than or equal to its next element
            right = mid;
        }
    }

    // When left == right, we have found the peak
    return left;
}

int main() {
    vector<int> arr1 = {0, 1, 0};
    vector<int> arr2 = {0, 2, 1, 0};
    vector<int> arr3 = {0, 10, 5, 2};

    cout << "Peak index in arr1: " << findPeakIndexInMountainArray(arr1) << endl; // Output: 1
    cout << "Peak index in arr2: " << findPeakIndexInMountainArray(arr2) << endl; // Output: 1
    cout << "Peak index in arr3: " << findPeakIndexInMountainArray(arr3) << endl; // Output: 1

    return 0;
}
