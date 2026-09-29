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

    int maxsum=INT_MIN;
    int solve(TreeNode* root){
      if(!root)return 0;
        int left=solve(root->left);
        int right=solve(root->right);

        int niche_mila_ans=root->val+left+right;
        int koi_ek_acha=max(left,right)+root->val;
        int kewal_root_acha=root->val;

        maxsum=max({maxsum,niche_mila_ans,koi_ek_acha,kewal_root_acha});

        return max(koi_ek_acha,kewal_root_acha);
    }
    int maxPathSum(TreeNode* root) {
         solve(root);
         return maxsum;
    }
};