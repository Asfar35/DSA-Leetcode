class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int val: nums){
            if(m.find(val) != m.end())return true;
            m[val]++;
        }
        return false;
    }
};