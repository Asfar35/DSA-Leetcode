class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int n = nums.size();
        int ans = 0, l=0;
        long long mul = 1;
        for(int i = 0; i<n; i++){
            mul *= nums[i];
            while(mul >= k) mul /= nums[l++];
            ans += (i-l+1);
        }
        return ans;
    }
};