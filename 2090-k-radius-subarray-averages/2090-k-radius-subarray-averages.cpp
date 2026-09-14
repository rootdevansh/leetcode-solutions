class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        long long windowsize=2LL*k+1;
        vector<int>result(n,-1);
        if(n<windowsize){
            return result;
        }
        long long currentsum=0;
        for(int i=0;i<windowsize;i++){
            currentsum+=nums[i];
        }
        result[k]=currentsum/windowsize;

        for(int i=windowsize;i<n;i++){
            currentsum+=nums[i]-nums[i-windowsize];
            result[i-k]=currentsum/windowsize;
        }
        return result;
    }
};