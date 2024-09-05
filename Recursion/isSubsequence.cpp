// Example 1:

// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:

// Input: s = "axc", t = "ahbgdc"
// Output: false

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        
        // Two pointers to traverse s and t
        int i = 0, j = 0;
        
        // Traverse t
        while (j < n) {
            // If characters match, move pointer on s
            if (i < m && s[i] == t[j]) {
                i++;
            }
            // Always move pointer on t
            j++;
        }
        
        // If we've gone through all characters in s, it's a subsequence
        return (i == m);
    }
};
