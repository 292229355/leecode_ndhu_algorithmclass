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
    int deepestLeavesSum(TreeNode* root) {
        int res = 0,level = 0,max = 0;
        dfs(root,res,level,max);
        return res;
    }
    void dfs(TreeNode* node,int& res,int level,int& max){
        if(!node) return ;
        if(level> max){
            max = level;
            res = 0 ;
        }
        if(level == max){
            res += node->val;
        }
        dfs(node->left,res,level+1,max);
        dfs(node->right,res,level+1,max);
    }
};
