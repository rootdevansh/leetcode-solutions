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
    TreeNode* solve(TreeNode* root,int val,int depth,int cd){
        if(!root)return NULL;
        if(cd==depth-1){
            TreeNode* temp1=new TreeNode(val);
            TreeNode* temp2=new TreeNode(val);
                temp1->left=root->left;
                root->left=temp1;
                temp2->right=root->right;
                root->right=temp2;
            
            return root;
        }
        solve(root->left,val,depth,cd+1);
        solve(root->right,val,depth,cd+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        int cd=1;
        if(depth==1){
            TreeNode* temp1=new TreeNode(val);
            temp1->left=root;
            return temp1;
        }

        return solve(root,val,depth,cd);
    }
};