/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans = INT_MIN, level = 1, temp = 0;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int size = qu.size();
            int sum = 0;
            temp++;
            while(size--){
                TreeNode* curr = qu.front();
                qu.pop();
                sum += curr->val;
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
            if(sum>ans){
                ans = sum;
                level = temp;
            }
        }
        return level;
    }
};