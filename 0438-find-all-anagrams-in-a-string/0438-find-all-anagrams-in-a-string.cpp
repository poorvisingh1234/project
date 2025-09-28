class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     // (p.size()>s.size()) return -1;
    
    unordered_map<char,int> freq1,freq2;
    vector<int> results;

    for (char c : p){
        freq1[c]++;
    }

    int window = p.size();

    for (int i =0;i<s.size();i++){
        freq2[s[i]]++;

        if (i>=window){
            char left = s[i-window];
             freq2[left]--;
            if (freq2[left]==0){
                freq2.erase(left);
                
            }
        }

        if (freq1 == freq2){
         results.push_back(i-window+1);
        }

     
    }



   return results;

    }
};