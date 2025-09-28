class Solution {
public:
    bool checkInclusion(string s1, string s2) {

         if (s1.size() > s2.size()) return false;
        unordered_map<char,int> freq1,freq2;

        for (char c : s1){
            freq1[c]++;
        }

        int window = s1.size();

        for(int i = 0; i<s2.size();i++){
            freq2[s2[i]]++;

            if (i>=window){
                char left = s2[i-window];
                freq2[left]--;

                if(freq2[left]==0){
                    freq2.erase(left);
                }
            }

            if (freq1==freq2) return true;
        }

        return false;
    }
};