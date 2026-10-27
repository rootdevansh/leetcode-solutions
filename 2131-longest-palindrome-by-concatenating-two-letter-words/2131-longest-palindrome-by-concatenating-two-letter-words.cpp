class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        bool sameused=false;
        int size=0;
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }

        for(string &word:words){
            string rev=word;
            reverse(rev.begin(),rev.end());
            if(rev!=word){
                if(mp[word]>=1&&mp[rev]>=1){
                    mp[word]--;
                    mp[rev]--;
                    size+=4;
                }
            }else{
                if(mp[word]>=2){
                    mp[word]-=2;
                    size+=4;
                }else if(mp[word]==1&&sameused==false){
                    mp[word]--;
                    sameused=true;
                    size+=2;
                }
            }
        }
        return size;
       
    }
};