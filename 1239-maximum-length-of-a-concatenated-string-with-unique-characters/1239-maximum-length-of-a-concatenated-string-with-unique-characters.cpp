class Solution {
public:
    unordered_map<string,int>mp;
    bool hasduplicate(vector<string>& arr,int idx,string temp){
        unordered_map<char,int>mp;
        for(char i:arr[idx]){
            mp[i]++;
        }
        for(char i:arr[idx]){
            if(mp[i]>1)return true;
        }
        for(char ch:temp){
            if(mp.find(ch)!=mp.end())return true;
        }

        return false;
        
    }
    int solve(vector<string>& arr,int idx,string temp){
        if(idx>=arr.size()){
            return temp.length();
        }
        if(mp.find(temp)!=mp.end())return mp[temp];
        if(hasduplicate(arr,idx,temp)){
            return solve(arr,idx+1,temp);
        }

        int choose=solve(arr,idx+1,temp+arr[idx]);
        int skip=solve(arr,idx+1,temp);

        return  mp[temp]= max(choose,skip);

    }
    int maxLength(vector<string>& arr) {
        
        mp.clear();
        string temp="";
        return solve(arr,0,temp);
    }
};