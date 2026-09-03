class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0;
        int maxminsub=INT_MAX;
        int currentsum=0;
        for(int j=0;j<nums.size();j++){
            currentsum+=nums[j];
            while(currentsum>=target){
                currentsum-=nums[i];
                maxminsub=min(maxminsub,j-i+1);
                i++;
            }
        }
        if(maxminsub==INT_MAX)return 0;

        return maxminsub;
        
    }
};