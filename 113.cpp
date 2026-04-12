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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v1;
        vector<int> res;
        DFS(root,res,targetSum,v1);
        return v1;
    }
    void DFS(TreeNode* node,vector<int> res,int Sum,vector<vector<int>>& ans){
        if(!node) return;
        res.push_back(node->val);
        if(node->val == Sum && node->left == nullptr && node->right == nullptr){
            ans.push_back(res);
        }
        DFS(node->left,res,Sum - node->val,ans);
        DFS(node->right,res,Sum - node->val,ans);
        
    }


};
