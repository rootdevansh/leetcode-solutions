class Solution {
public:
    int memo[50001];
    int n;
    int findnext(vector<vector<int>>&array,int left,int end){
        int right=n-1;
        int result=n;
        while(left<=right){
           int mid=left+(right-left)/2;
            if(array[mid][0]>=end){
                result=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return result;
    }
    int solve(vector<vector<int>>&array,int i){
        if(i>=n)return 0;
        if(memo[i]!=-1)return memo[i];

        int next=findnext(array,i+1,array[i][1]);
        int taken=array[i][2]+solve(array,next);
        int skip=solve(array,i+1);

        return memo[i]=max(taken,skip);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n=startTime.size();

        memset(memo,-1,sizeof(memo));
        vector<vector<int>>array(n,vector<int>(3,0));
        
        for(int i=0;i<n;i++){
            array[i][0]=startTime[i];
            array[i][1]=endTime[i];
            array[i][2]=profit[i];
        }
        auto comp=[&](auto &vec1,auto &vec2){
            return vec1[0]<vec2[0];
        };
        sort(begin(array),end(array),comp);

        return solve(array,0);
    }
};