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
    void solve(TreeNode* root,string &st){
        if(root==NULL){
            st+="0";
            return;
        }
        st+=to_string(root->val);
        st+=" ";
        solve(root->left,st);
        solve(root->right,st);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        string s1="";
        string s2="";
        solve(p,s1);
        solve(q,s2);
        if(s1==s2)return true;
        return false;
    }
};