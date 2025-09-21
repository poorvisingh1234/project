class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq1, freq2;
        vector<int> result;

        for (int nums: nums1){
            freq1[nums]++;
        }

          for (int nums: nums2){
            freq2[nums]++;
        }

        for (auto &p: freq1){
            int x = p.first;
            if (freq2.find(x)!=freq2.end()){
                int count = min (p.second, freq2[x]);
                for (int i =0;i<count;i++){
                    result.push_back(x);
                }
            }
        }

        return result;
    }
};