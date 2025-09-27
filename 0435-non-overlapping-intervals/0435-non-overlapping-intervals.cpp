class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {


        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        if(n==0) return 0;
        int count = 0;

        int prevSP = intervals[0][0];
        int prevEP = intervals[0][1];

        for(int i =1;i<n;i++){
           int currSP = intervals[i][0];
           int currEP = intervals[i][1];

           if (prevEP>currSP){
            count++;
            if (prevEP>currEP){
                prevEP = currEP;
            }
           } else{
            prevEP = currEP;
            prevSP = currSP;
           }
        }

    return count;

    }
};