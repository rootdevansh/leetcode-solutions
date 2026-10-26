class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        vector<pair<int,int>>p(n);
        for(int i=0;i<n;i++){
           p[i]={plantTime[i],growTime[i]};
        }
        auto lambda=[](pair<int,int>&p1,pair<int,int>&p2){
            return p1.second>p2.second;
        };

        sort(p.begin(),p.end(),lambda);
        int plantday=0;
        int maxgrowdays=0;
        for(int i=0;i<n;i++){
            plantday+=p[i].first;
            int currentgrowdays=plantday+p[i].second;
            maxgrowdays=max(currentgrowdays,maxgrowdays);
        }
        return maxgrowdays;
    }
};