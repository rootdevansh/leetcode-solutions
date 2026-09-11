class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>st;
        for(int &num:nums){
            st.insert(num);
        }
        vector<int>result;
        for(int i=1;i<nums.size();i++){
            if(!st.contains(i)){
                result.push_back(i);
            }
        }
        if(!st.contains(nums.size())){
            result.push_back(nums.size());
        }
        return result;
    }
};