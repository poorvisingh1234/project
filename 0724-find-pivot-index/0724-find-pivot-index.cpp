class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0); //The third parameter in std::accumulate() is the initial value of the sum.

        int left=0;
   for (int i = 0; i < nums.size(); i++) {
            // total - left - nums[i] is the right sum
            // If left sum equals right sum, we've found the pivot
            if (left == total - left - nums[i]) {
                return i;
            }
               // Add the current element to the left sum before moving to the next index
            left += nums[i];
        }
        return -1;
    }
};


//TIME COMPLEXITY : O(n) 
//Space Complexity: O(1) Only uses two integer variables: total and left No extra space that grows with input size

//  you still want to use a range-based loop, you'd have to manually track the index:

// int total = accumulate(nums.begin(), nums.end(), 0);
// int left = 0;
// int i = 0;

// for (int num : nums) {
//     if (left == total - left - num)
//         return i;
//     left += num;
//     i++;
// }
// return -1;