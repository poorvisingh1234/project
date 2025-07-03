
// When the array is sorted lexicographically, the strings that are most different will be at the two ends.

// Hence, the common prefix of the first and last string is guaranteed to be the longest common prefix of the entire array.


// If the input array is empty, return "".

// Sort the strs array lexicographically.

// Compare characters of the first and last strings one-by-one.

// Append matching characters to the result until a mismatch occurs.

// Return the result.


// Time Complexity:
// Sorting: O(n∗logn) where n is the number of strings.

// Comparing first and last: O(m) where m is the length of the shortest string.

// Overall: O(nlogn+m)

// Space Complexity:
// O(1) extra space (ignoring result string).
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end()); // is a C++ STL (Standard Template Library) command that sorts a container — in this case, a vector of strings (strs) — in lexicographical (dictionary) order.
        string first = strs[0], last = strs.back(), result = ""; //last = strs.back()...Assigns the last string from the sorted vector to last.
//strs.back() gives the last element in the vector — the largest string in lexicographic order.
//result = "" Initializes an empty string result, usually to store a common prefix or any building result.
        for (int i = 0; i < first.size(); i++) {
            if (i < last.size() && first[i] == last[i]) { 
                result += first[i];
            } else {
                break;
            }
        }
        return result;
    }
};