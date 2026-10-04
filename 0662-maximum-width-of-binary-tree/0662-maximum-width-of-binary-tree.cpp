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
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        ll maxwidth=0;
        queue<pair<TreeNode*,ll>>qw;
        qw.push({root,0});
        while(!qw.empty()){
            int n=qw.size();
            ll left=qw.front().second;
            ll right=qw.back().second;
            maxwidth=max(right-left+1,maxwidth);
            while(n--){
               TreeNode* curr=qw.front().first;
               ll idx=qw.front().second;
               qw.pop();
               if(curr->left){
                qw.push({curr->left,2*idx+1});
               }
               if(curr->right){
                qw.push({curr->right,2*idx+2});
               }
               
            }
            
        }
        return maxwidth;
    }
};