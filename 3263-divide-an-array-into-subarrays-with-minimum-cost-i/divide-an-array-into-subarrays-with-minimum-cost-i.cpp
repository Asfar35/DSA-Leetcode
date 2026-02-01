class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return -1;
        if(n==3) return accumulate(nums.begin(), nums.end(),0);
        int first=1, second = 2;
        for(int i=2;i<n;i++){
            if(nums[first]>nums[i]){
                second = first;
                first = i;
            }
            else if(nums[second]>nums[i]){
                second = i;
            }
        }
        return nums[0]+nums[first]+nums[second];
    }
};