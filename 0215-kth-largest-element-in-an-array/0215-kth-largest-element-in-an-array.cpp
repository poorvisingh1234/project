class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) { //minheap-smallest element is first
        priority_queue<int,vector<int>,greater<int>>minHeap;

        for (int num : nums){
            minHeap.push(num);

            if(minHeap.size()>k){
                minHeap.pop();

            }
        }

        return minHeap.top();
    }
};