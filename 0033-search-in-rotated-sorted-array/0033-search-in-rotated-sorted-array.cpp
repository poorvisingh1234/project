
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        // Binary search loop
        while (left <= right) {
            // Calculate mid without overflow
            int mid = left + (right - left) / 2;

            // If we found the target, return its index
            if (nums[mid] == target) return mid;

            // Determine which half is sorted
            if (nums[left] <= nums[mid]) {
                // Left half is sorted

                // Check if target lies within the sorted left half
                if (nums[left] <= target && target < nums[mid]) {
                    // Target lies in left half, move right pointer
                    right = mid - 1;
                } else {
                    // Target not in left half, search in right half
                    left = mid + 1;
                }
            } else {
                // Right half is sorted

                // Check if target lies within the sorted right half
                if (nums[mid] < target && target <= nums[right]) {
                    // Target lies in right half, move left pointer
                    left = mid + 1;
                } else {
                    // Target not in right half, search in left half
                    right = mid - 1;
                }
            }
        }

        // If we exit the loop, target was not found
        return -1;
    }
};

    
