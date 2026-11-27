class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n=nums.size();
        return -nums[0]+nums[n-1]+nums[n-2];
    }
};