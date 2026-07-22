class Solution {
public:
    int jump(vector<int>& nums) {
        int totalJumps=0;
        int dest=nums.size()-1;
        int coverage=0;
        int lastJumpIdx=0;
        if(nums.size()==1){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            coverage=max(coverage,i+nums[i]);
            if(i==lastJumpIdx){
                lastJumpIdx=coverage;
                totalJumps++;
            }
            
        }
        return totalJumps;
    }
};
