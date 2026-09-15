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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)return {};
        vector<int>result;
        queue<TreeNode*>qw;
        qw.push(root);
        while(!qw.empty()){
            TreeNode* node=NULL;
            int n=qw.size();
            while(n--){
                node=qw.front();
                qw.pop();
                if(node->left!=NULL)qw.push(node->left);
                if(node->right!=NULL)qw.push(node->right);
            }
            result.push_back(node->val);
        }
        return result;
    }
};