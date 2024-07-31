class Solution {
public:
    bool isPalindrome(int x) {
        int digit, original, rev = 0;
        original = x;
        if (x < 0 || x % 10 == 0 && x != 0) {
            return false;
        }
        while (x != 0) {
            digit = x % 10;
            if (rev > (INT_MAX / 10) ||
                (rev == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return false; 
            }
            rev = rev * 10 + digit;
            x = x / 10;
        }

        return original == rev;
    }
};