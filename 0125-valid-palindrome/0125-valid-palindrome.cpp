class Solution {

public:
    bool isPalindrome(string s) {
        string filtered;
        for (char c : s) {
            if (isalnum(c)) { //Checks if the character c is alphanumeric (i.e., a letter or a digit). It skips spaces, punctuation, etc.
                filtered += tolower(c); //If c is alphanumeric, it is converted to lowercase and added to filtered.
            }
        }

        int left = 0;
        int right = filtered.size() - 1;

        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;        
    }
};
  