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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>qw;
        qw.push(root);
        bool past=false;
        while(!qw.empty()){
            TreeNode* node=qw.front();
            qw.pop();

            if(node==NULL){
                past=true;
            }else{
            if(past==true)return false;
            qw.push(node->left);
            qw.push(node->right);
            }

           
        }
        return true;
    }
};