class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        for(vector<int> &v: queries){
            int r1 = v[0], r2 = v[2], c1 = v[1], c2 = v[3];
            ans[r1][c1]++;
            if(r2+1<n) ans[r2+1][c1]--;
            if(c2+1<n){
                ans[r1][c2+1]--;
                if(r2+1<n) ans[r2+1][c2+1]++;
            }
        }

        for(int i=0;i<n;i++)
            for(int j=1; j<n; j++)
                ans[i][j] += ans[i][j-1];
        
        for(int i=0;i<n;i++)
            for(int j=1; j<n; j++)
                ans[j][i] += ans[j-1][i];
        return ans;
    }
};