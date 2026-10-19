class Solution {
public:
    int t[100001][2];
    int solve(string &s,int i,int prev){
        if(i>=s.length()){
            return 0;
        }
        if(t[i][prev]!=-1)return t[i][prev];
        int flip=INT_MAX;
        int skip=INT_MAX;
        if(s[i]=='0'){
            if(prev==0){
                 flip=1+solve(s,i+1,1);
                 skip=solve(s,i+1,0);
            }else{
                return t[i][prev]= 1+solve(s,i+1,1);
            }
        }else{
            if(prev==0){
                 flip=1+solve(s,i+1,0);
                 skip=solve(s,i+1,1);
            }else{
                return t[i][prev]=solve(s,i+1,1);
            }
        }
         return t[i][prev]=min(flip,skip);
    }
    int minFlipsMonoIncr(string s) {
        memset(t,-1,sizeof(t));
        return solve(s,0,0);
    }
};