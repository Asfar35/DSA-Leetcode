class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            long long mul = nums[i];
            if(mul<k)ans+=1;
            else continue;
            for(int j = i+1; j<n ; j++){
                mul *= nums[j];
                if(mul<k)ans++;
                else if(mul>k)break;
            }
        }
        return ans;
    }
};