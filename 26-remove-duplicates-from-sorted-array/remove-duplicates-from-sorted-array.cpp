class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1)return n;
        int idx = 0;
        for(int i=0; i<n; i++){
            nums[idx++] = nums[i];
            while(i<n-1 && nums[i] == nums[i+1]) i++;
        }
        return idx;
    }
};