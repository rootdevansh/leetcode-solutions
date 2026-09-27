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
    int findmaxdiff(TreeNode* root,int maxx,int minn){
        if(!root){
            return abs(maxx-minn);
        }
         maxx=max(maxx,root->val);
         minn=min(minn,root->val);
        int l=findmaxdiff(root->left,maxx,minn);
        int r=findmaxdiff(root->right,maxx,minn);
        return max(l,r);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=findmaxdiff(root,root->val,root->val);
        return ans;
    }
};