class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        unordered_map<int, int> mp;
        for(int val: nums){
            mp[val]++;
        }
        for(auto itr: mp) if(itr.second == n) return itr.first;
        return -1;
    }
};