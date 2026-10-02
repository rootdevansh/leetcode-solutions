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
    
    void solve(TreeNode* root, vector<string>&result,string st){
       if(root==NULL)return;
        st+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL){
            result.push_back(st);
        }
        solve(root->left,result,st);
        solve(root->right,result,st);

    }
    int sumNumbers(TreeNode* root) {
        vector<string>result;
        string st="";
        solve(root,result,st);
        int totalsum=0;
        for(auto value:result){
            totalsum+=stoi(value);
        }
        return totalsum;
    }
};