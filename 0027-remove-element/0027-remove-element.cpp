
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 'k' will track the position where we place elements not equal to 'val'
        int k = 0;

        // Loop through every element of the array
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is not equal to 'val', we keep it
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move the current element to position k
                k++;               // Move to the next position
            }

            // DRY RUN (debugging style prints - comment out when not needed)
            // Example: nums = [0,1,2,2,3,0,4,2], val = 2
            /*
                i=0 → nums[0]=0 != 2 → nums[0] = 0 → k=1
                i=1 → nums[1]=1 != 2 → nums[1] = 1 → k=2
                i=2 → nums[2]=2 == 2 → skip
                i=3 → nums[3]=2 == 2 → skip
                i=4 → nums[4]=3 != 2 → nums[2]=3 → k=3
                i=5 → nums[5]=0 != 2 → nums[3]=0 → k=4
                i=6 → nums[6]=4 != 2 → nums[4]=4 → k=5
                i=7 → nums[7]=2 == 2 → skip
            */
        }

        // The first k elements are now valid, others can be ignored
        return k;
    }
};


//  The method we used earlier is already optimal in terms of time and space:

// Time: O(n) (we must check every element at least once).

// Space: O(1) (we're modifying in-place without using extra memory).

// However, there's an alternative equally-optimal approach that may be faster in practice in some cases by reducing unnecessary copies — it's called the two-pointer

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int i = 0;
//         int n = nums.size();

//         while (i < n) {
//             if (nums[i] == val) {
//                 // Swap with the last unprocessed element
//                 nums[i] = nums[n - 1];
//                 // Reduce the array size logically
//                 n--;
//                 // Do NOT increment i here, because we need to check the swapped element
//             } else {
//                 i++; // Move forward if current element is valid
//             }

//             /*
//             DRY RUN for nums = [0,1,2,2,3,0,4,2], val = 2
//             Initial: i=0, n=8

//             i=0 → nums[0]=0 != 2 → i++
//             i=1 → nums[1]=1 != 2 → i++
//             i=2 → nums[2]=2 == 2 → swap with nums[7]=2 → nums[2]=2, n=7
//             i=2 → nums[2]=2 == 2 → swap with nums[6]=4 → nums[2]=4, n=6
//             i=2 → nums[2]=4 != 2 → i++
//             i=3 → nums[3]=2 == 2 → swap with nums[5]=0 → nums[3]=0, n=5
//             i=3 → nums[3]=0 != 2 → i++
//             i=4 → nums[4]=3 != 2 → i++
//             i=5 → i == n → done

//             Final: nums = [0,1,4,0,3,...], k = 5
//             */
//         }

//         return n; // n is the new length (k), with val removed
//     }
// };