class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curmax = nums[0],maxnow=nums[0];
        for (int i=1;i<nums.size();i++)
        {
            curmax = max(nums[i],curmax+nums[i]);
            maxnow=max(maxnow,curmax);
        }
return maxnow;
    }
};