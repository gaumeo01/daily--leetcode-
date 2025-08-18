class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);
        int n = nums.size();
        int l = 1;
         for (int i = 0; i < n; i++) {
            output[i] *= l;
            l *= nums[i];
        }
        int r = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= r;
            r *= nums[i];
        }
        return output;
    }
};