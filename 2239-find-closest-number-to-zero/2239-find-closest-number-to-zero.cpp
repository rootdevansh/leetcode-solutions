class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        int result;
        for(int i=0;i<nums.size();i++){
            if(abs(0-nums[i])<mini){
                result=nums[i];
                mini=abs(0-nums[i]);
            }else if(abs(0-nums[i])==mini&&nums[i]>result){
                result=nums[i];
            }
        }
        return result;
    }
};