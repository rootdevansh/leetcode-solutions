class Solution {
public:
    int t[1001][1001];
    int n,m;
    int solve(string &text1, string &text2,int i,int j){
        if(i>=n||j>=m)return 0;
        if(t[i][j]!=-1)return t[i][j];
        if(text1[i]==text2[j]){
            return t[i][j]=1+solve(text1,text2,i+1,j+1);
        }
        int itaken=solve(text1,text2,i,j+1);
        int jtaken=solve(text1,text2,i+1,j);

        return t[i][j]= max(itaken,jtaken);
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,-1,sizeof(t));
        n=text1.length();
        m=text2.length();
        return solve(text1,text2,0,0);
    }
};