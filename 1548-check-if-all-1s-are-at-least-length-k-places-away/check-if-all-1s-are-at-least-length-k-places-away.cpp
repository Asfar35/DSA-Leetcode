class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size(), l = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                if(l==-1) l = i;
                else {
                    if((i-l-1) < k){
                        // cout<< (i-l-1);
                        return false;
                    } 
                    l = i;
                }
            }
        }
        return true;
    }
};