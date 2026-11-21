class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0;
        int cp=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<=cp){
                cp=prices[i];
            }else{
                result+=(prices[i]-cp);
                cp=prices[i];
            }
        }
        return result;
    }
};