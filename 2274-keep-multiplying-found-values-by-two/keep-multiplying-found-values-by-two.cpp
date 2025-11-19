class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, r = n-1; 
        while(l<=r){
            if(original>nums[n-1]) return original;
            int mid = l + (r-l)/2;
            if(nums[mid] == original){
                original *= 2 ;
                l = 0;
                r = n - 1; 
            } 
            else if(nums[mid] < original) l = mid + 1;
            else r = mid - 1;
        }
        return original;
    }
};