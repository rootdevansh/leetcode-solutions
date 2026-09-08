class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int word=0;
        for(auto &sentence:sentences){
            int currentword=1;
            for(char ch:sentence){
                if(ch==' '){
                    currentword++;
                }
            }
            word=max(word,currentword);
        }
        return word;
    }
};