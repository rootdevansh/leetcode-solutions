class Solution {
public:
    int partitionString(string s) {
        string temp="";
        int parts=1;
        for(char &ch:s){
            size_t pos=temp.find(ch);
            if(pos==string::npos){
                temp.push_back(ch);
            }else{
                parts++;
                temp=ch;
            }
        }

        return parts;

    }
};