class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        for(vector<int> &v: queries){
            for(int i=v[0];i<=v[2];i++){
                for(int j=v[1]; j<=v[3]; j++)
                    ans[i][j] += 1;
            }
        }
        return ans;
    }
};