class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = -1, r = -1;

        int maxVal = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxVal = max(maxVal, nums[i]);
            if (nums[i] < maxVal)
                r = i;
        }

        int minVal = INT_MAX;
        for (int i = n - 1; i >= 0; i--) {
            minVal = min(minVal, nums[i]);
            if (nums[i] > minVal)
                l = i;
        }

        return (r == -1) ? 0 : r - l + 1;
    }

};