class Solution {
public:
    int firstUniqChar(std::string s) {
        std::unordered_map<char, int> map;
        
        // Count the frequency of each character
        for (char c : s) {
            map[c]++;
        }
        
        // Find the index of the first unique character
        for (int i = 0; i < s.length(); i++) {
            if (map[s[i]] == 1) {
                return i;
            }
        }

//TIME COMPLEXITY= O(n+n)=O(n)
//         Space Complexity: O(1) (constant)
// You're using unordered_map<char, int> map;

// The map holds at most 26 entries, since there are only 26 lowercase English letters (as per problem constraints).

// So space complexity is O(1) — considered constant space even though a map is used.
        
        return -1; // Return -1 if no unique character is found
    }
};