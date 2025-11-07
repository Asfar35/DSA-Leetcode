class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat[0].size();
        for(int i=0; i<n; i++)
            for(int j=0; j<mat.size(); j++){
                sort(mat[j].begin(), mat[j].end());
                if(mat[j][i] == 1)
                    return {j, n-i};
            }
        return {0, 0};
    }
};