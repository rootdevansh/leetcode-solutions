class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>>mp;
        int n=names.size();
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }   
        vector<string>result;
        for(const auto&[height,name]:mp){
            result.push_back(name);
        }
        return result;
    }
};