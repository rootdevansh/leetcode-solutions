class Solution {
public:
    int t[10001];
    bool solve(int i,vector<int>& nums){
       
        if(i==nums.size()-1)return t[i]=true;

        if(t[i]!=-1)return t[i];

        for(int k=1;k<=nums[i];k++){
            if(solve(i+k,nums)==true)return t[i]=true;
        }
        return t[i]=false;
    }
    bool canJump(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return solve(0,nums);
    }
};