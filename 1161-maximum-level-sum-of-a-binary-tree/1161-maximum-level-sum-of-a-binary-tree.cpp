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
    void solve(TreeNode* root, vector<pair<int,int>>&pr,int idx){
        if(root==NULL){
            return;
        }
        if(pr.size()<idx)pr.push_back({0,idx});
        pr[idx-1].first+=root->val;
        solve(root->left,pr,idx+1);
        solve(root->right,pr,idx+1);

        

    }
    int maxLevelSum(TreeNode* root) {
        int maxvalue=INT_MIN;
        int minidx=INT_MAX;
        vector<pair<int,int>>pr;
        solve(root,pr,1);
        for(auto val:pr){
            int value=val.first;
            int index=val.second;
            if(value>maxvalue){
                minidx=index;
                maxvalue=value;
            }else if(value==maxvalue){
                minidx=min(minidx,index);
            }
        }
        return minidx;
    }
};