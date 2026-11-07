class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int &num:nums){
            mp[num]++;
        }
        int opr=0;
        for(auto &it:mp){
            int val=it.second;
            if(val<2)return -1;
            if(val/3==0){
                opr++;
            }else if(val%3==0){
                opr+=val/3;
            }else{
                opr+=(val/3+1);
            }
        }
        return opr;
    }
};