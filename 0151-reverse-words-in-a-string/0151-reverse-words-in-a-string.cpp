class Solution {
public:
    string reverseWords(string s) {
        // Create an input string stream from the input string 's'
        // This allows us to extract words separated by spaces easily
        istringstream iss(s);                      

        // Create a vector to store all words in order
        vector<string> words;                    

        // Temporary string variable to hold each extracted word
        string word;

        // Extract words one by one from the string stream (ignoring multiple spaces)
        while (iss >> word) {
            words.push_back(word); // Add each word to the 'words' vector
        }

        // Initialize two pointers for reversing the order of words
        int left = 0, right = words.size() - 1;

        // Swap words from both ends towards the center
        while (left < right) {
            swap(words[left], words[right]); // Swap left and right words
            left++;   // Move left pointer forward
            right--;  // Move right pointer backward
        }

        // Create an empty string to store the final reversed sentence
        string result;                             

        // Iterate over the reversed vector of words
        for (const string& w : words) {            
            if (!result.empty()) {
                // Add a space before appending the next word (to separate words)
                result += " ";
            }
            // Append the current word to the result string
            result += w;                           
        }

        // Return the final reversed sentence
        return result;                             
    }
};
