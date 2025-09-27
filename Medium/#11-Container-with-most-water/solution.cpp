class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxW = 0;
        while (left < right) {
            int currentW = min(height[left], height[right]) * (right - left);
            maxW = max(maxW, currentW);
            if (height[left] < height[right]) {
                    left++;}
                else {
                    right--;}
            }
        return maxW;
    }
};