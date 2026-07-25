class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minVal=arrays[0][0];
        int maxVal=arrays[0].back();
        int maxDist=0;
        for(int i=1;i<arrays.size();i++){
            int currMin=arrays[i][0];
            int currMax=arrays[i].back();
            maxDist=max(maxDist,abs(currMin-maxVal));
            maxDist=max(maxDist,abs(currMax-minVal));
            minVal=min(currMin,minVal);
            maxVal=max(currMax,maxVal);

        }
        return maxDist;
    }
};
