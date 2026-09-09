class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty())return {};

        vector<int>sa=arr;
        sort(sa.begin(),sa.end());
        sa.erase(unique(sa.begin(),sa.end()),sa.end());
        unordered_map<int,int>mp;
        int i=1;
        for(int &ele:sa){
            mp[ele]=i;
            i++;
        }
        vector<int>result;
        for(int i=0;i<arr.size();i++){
            result.push_back(mp[arr[i]]);
        }
        return result;
    }
};