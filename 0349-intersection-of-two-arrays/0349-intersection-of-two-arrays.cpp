class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s1(arr1.begin(),arr1.end());
        unordered_set<int> s2(arr2.begin(),arr2.end());
        vector<int> result;

    


        for(int x : s1){
            if(s2.find(x)!=s2.end()){
                result.push_back(x);
            }
        }

        return result;

    }
};