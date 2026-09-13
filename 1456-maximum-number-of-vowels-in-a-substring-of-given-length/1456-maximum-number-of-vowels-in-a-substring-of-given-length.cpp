class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>st;
        st.insert({'a','e','i','o','u'});
        int i=0;
        int maxlen=INT_MIN;
        int clen=0;

        for(int j=0;j<s.length();j++){
            if(st.contains(s[j]))clen++;
            if(j-i+1==k){
                maxlen=max(maxlen,clen);
                if(st.contains(s[i]))clen--;
                i++;
            }
        }
        return maxlen;
        
    }
};