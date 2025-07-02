class Solution {
public:
    void reverseString(vector<char>& s) {
        // We use two pointers: one starting from the beginning, one from the end
        int left = 0;                // Points to the first character
        int right = s.size() - 1;    // Points to the last character

        // Continue swapping characters until the pointers meet
        while (left < right) {
            // Swap the characters at left and right
            char temp = s[left];     // Store the left character temporarily
            s[left] = s[right];      // Copy the right character to the left position
            s[right] = temp;         // Copy the stored character to the right position

            // Move the pointers toward the center
            left++;
            right--;
        }
    }
};


// Time Complexity: O(n) → where n is the size of the input

// Space Complexity: O(1) → no extra memory used (in-place)

// 1-Line STL Version (for vector<char>):

// reverse(s.begin(), s.end());

//RECURSIVE MEATHOD
//   if (left >= right) return;

//         // Swap characters at positions left and right
//         char temp = s[left];
//         s[left] = s[right];
//         s[right] = temp;

//         // Recursive call to move toward the middle
//         reverseHelper(s, left + 1, right - 1);
//     }

//     void reverseString(vector<char>& s) {
//         reverseHelper(s, 0, s.size() - 1); // Initial call with full range
//     }
// };