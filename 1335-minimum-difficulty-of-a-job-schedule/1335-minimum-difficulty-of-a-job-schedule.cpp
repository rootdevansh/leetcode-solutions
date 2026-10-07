class Solution {
public:
    int t[301][11];
    int solve(vector<int>& jd,int n,int d,int idx){
        if(d==1){
            int maxD=jd[idx];
            for(int i=idx;i<=n-d;i++){
                maxD=max(maxD,jd[i]);
            }
            return maxD;
        }
        if(t[idx][d]!=-1){
            return t[idx][d];
        }
        int maxD=jd[idx];
        int finalresult=INT_MAX;

        for(int i=idx;i<=n-d;i++){
            maxD=max(maxD,jd[i]);
            int result=maxD+solve(jd,n,d-1,i+1);
            finalresult=min(result,finalresult);
        }

        return t[idx][d]=finalresult;

    }
    int minDifficulty(vector<int>& jd, int d) {
        int n=jd.size();
        if(d>n){
            return -1;
        }
        memset(t,-1,sizeof(t));

        return solve(jd,n,d,0);

    }
};