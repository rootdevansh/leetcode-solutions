class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int curr=0;
        int prevmax=0;
        
        int ttime=0;

        for(int i=0;i<n;i++){
            if(i>0&&colors[i]!=colors[i-1])prevmax=0;
            int curr=neededTime[i];
            ttime+=min(prevmax,curr);
            prevmax=max(prevmax,curr);
        }
        return ttime;
    }
};