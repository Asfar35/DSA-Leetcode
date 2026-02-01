class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return -1;
        if(n==3) return accumulate(nums.begin(), nums.end(),0);
        int first=1, second = 2, ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[first]>nums[i]){
                first = i;
            }
        }
        ans+=nums[first];
        nums[first]=INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[second]>nums[i]){
                second = i;
            }
        }
        return ans+nums[second];
    }
};