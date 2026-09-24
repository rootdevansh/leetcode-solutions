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
    
    bool solve(TreeNode* node, int targetSum,int cs){
        if(node==NULL)return false;
        cs+=node->val;
        if(node->left==NULL&&node->right==NULL){
            if(targetSum==cs){
                return true;
            }
            return false;
        }
        return solve(node->left,targetSum,cs)||solve(node->right,targetSum,cs);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int cs=0;
        return solve(root,targetSum,cs);
        
    }
};