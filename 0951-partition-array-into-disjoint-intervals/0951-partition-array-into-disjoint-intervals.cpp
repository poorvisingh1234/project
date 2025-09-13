class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int global = nums[0];
        int left = nums[0];
        int partition = 0;
        
     for (int i = 0; i < nums.size(); i++){
       global = max(global,nums[i]);
       if (left > nums[i]) {
        partition =i;

       left = global;
       }


     }

     return partition + 1;
    }
};