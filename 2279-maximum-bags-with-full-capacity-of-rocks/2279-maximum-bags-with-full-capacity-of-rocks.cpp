class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0;
        int n=rocks.size();

        vector<pair<int,int>>p(n);
        for(int i=0;i<rocks.size();i++){
            p[i].first=capacity[i];
            p[i].second=rocks[i];
        }
        auto lambda=[](pair<int,int>&p1,pair<int,int>&p2){
           return (p1.first-p1.second)<(p2.first-p2.second);
        };
        sort(begin(p),end(p),lambda);

      
        for(auto &it:p){
            int value=it.first-it.second;
            if(value==0){
                count++;
                continue;
            }
            if(additionalRocks-value>=0){
                count++;
                additionalRocks-=value;
            }else{
                break;
            }
        }
        return count;
    }
};