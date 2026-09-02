class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int mlen=0;
        unordered_map<char,int>mp;
        for(int j=0;j<s.length();j++){
            if(mp.find(s[j])!=mp.end()&&mp[s[j]]>=mp[s[i]]){
                i=mp[s[j]]+1;
            }
            mp[s[j]]=j;
            mlen=max(mlen,j-i+1);
            
        }
        return mlen;
    }
};