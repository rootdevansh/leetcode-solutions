class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        sort(position.begin(),position.end());
        int even=0;
        int odd=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        return min(even,odd);
    }
};