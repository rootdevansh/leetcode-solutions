class Solution {
public:
    bool isPalindrome(string s) {
        string og="";
        for(char &ch:s){
            if(isalpha(ch)){
                og+=tolower(ch);
            }else if(isdigit(ch)){
                og+=ch;
            }
        }
        string beforeswap=og;
        reverse(begin(og),end(og));
        if(beforeswap==og)return true;

        return false;
    }
};