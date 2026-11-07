class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(begin(piles),end(piles),greater<int>());
        int n=piles.size();
        int i=1;
        int j=n-1;
        int result=0;

        while(i<n&&i<j){
            result+=piles[i];
            i+=2;
            j--;
        }
        return result;
    }
};