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
    int countleft(TreeNode* temp){
        int val=0;
        TreeNode* root=temp;
        while(root){
           root=root->left;
            val++;
        }
        return val;
    }
    int countright(TreeNode* temp){
        int val=0;
         TreeNode* root=temp;
        while(root){
          root=root->right;
            val++;
        }
        return val;
    }
    int countNodes(TreeNode* root) {
        int lefth=countleft(root);
        int righth=countright(root);
        if(lefth==righth){
            return (pow(2,lefth)-1);
        }

        return countNodes(root->left)+countNodes(root->right)+1;
    }
};