class Solution {
public:
    int minOperations(vector<int>& nums) {
        int totalopr=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])continue;
            int bigdif=abs(nums[i]-(nums[i-1]+1));
            nums[i]=nums[i]+bigdif;
            totalopr+=bigdif;
        }
        return totalopr;
    }
};