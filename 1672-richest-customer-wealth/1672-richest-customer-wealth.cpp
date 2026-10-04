class Solution {
public:
    int cs=0;
    int ms=0;
    int maximumWealth(vector<vector<int>>& accounts) {
        for(auto account:accounts){
            for(auto value:account){
                cs+=value;
            }
            ms=max(ms,cs);
            cs=0;
        }
        return ms;
    }
};