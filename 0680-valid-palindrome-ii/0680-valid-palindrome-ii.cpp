class Solution {
public:
    // Helper function to check if a substring s[left...right] is a palindrome
    bool val(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;  // Characters don't match → not a palindrome
            left++;
            right--;
        }
        return true;  // All characters matched → it's a palindrome
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // If characters don't match, we may skip **either one character**
            if (s[left] != s[right]) {
                // Try skipping the left character OR the right character
                // We must check both because only one might lead to a valid palindrome
                // We don't assume — we verify both possibilities using the helper function
                return val(s, left + 1, right) || val(s, left, right - 1);
            }
            // If characters match, move towards the center
            left++;
            right--;
        }

        // If the loop completes without needing to skip, the string is already a palindrome
        return true;
    }
};
