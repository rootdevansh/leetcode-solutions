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
    long maxprod=0;
    int finalsum=0;
    int totalsum(TreeNode* root){
        if(root==NULL)return 0;

        int lsum=totalsum(root->left);
        int rsum=totalsum(root->right);

        int totalsum=root->val+lsum+rsum;
        return totalsum;
    }
    int maxproduct(TreeNode* root){
        if(root==NULL)return 0;
        int currentsum=root->val+maxproduct(root->left)+maxproduct(root->right);
        maxprod=max(maxprod,(finalsum-currentsum)*long(currentsum));
        return currentsum;
    }
    int maxProduct(TreeNode* root) {
        finalsum=totalsum(root);
        maxproduct(root);
        return maxprod%1000000007;
        
    }
};