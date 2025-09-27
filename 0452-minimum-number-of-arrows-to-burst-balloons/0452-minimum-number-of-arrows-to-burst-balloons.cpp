class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n =points.size();
         if (n == 0) return 0;
       
        sort(begin(points),end(points));
        int arrows=1;
        int prevSP = points[0][0];
         int prevEP = points[0][1];

        for(int i=1;i<n;i++){
         int currSP = points[i][0];
         int currEP = points[i][1];
         

         if (currSP > prevEP){ //NO OVERLAP
           arrows++;
           prevSP = currSP;
           prevEP = currEP;

         } else {
            //overlapping occurs,,,find overlapping region

            prevSP = max(prevSP,currSP);
            prevEP = min(prevEP,currEP);
         }


        }


        return arrows;
    }
};