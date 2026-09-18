class Solution {
public:
    unordered_map<int,int>mp;
    int solve(int n){
        if(n<0)return 0;
       if(n==0)return 1;
        if(mp.find(n)!=mp.end())return mp[n];
       int onestep=solve(n-1);
       int twostep=solve(n-2);

        return mp[n]=onestep+twostep;
    }
    int climbStairs(int n) {
       return solve(n);
    }
};