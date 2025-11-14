class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        for(vector<int> &v: queries){
            int col1 = v[1], col2 = v[3];
            for(int i = v[0]; i<= v[2]; i++){
                ans[i][col1] += 1;
                if(col2+1 < n) ans[i][col2+1] -= 1;
            }
        }
        for(vector<int> &v: ans){
            for(int i=1; i<n; i++) v[i]+=v[i-1];
        }
        return ans;
    }
};