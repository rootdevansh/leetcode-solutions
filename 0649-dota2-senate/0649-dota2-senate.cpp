class Solution {
public:
    bool removenearestch(string &senate,char ch,int idx){
        bool check=false;
        while(true){
            if(idx==0){
                check=true;
            }
            if(senate[idx]==ch){
                senate.erase(begin(senate)+idx);
                break;
            }
            idx=(idx+1)%(senate.length());
        }
         return check;
    }
    string predictPartyVictory(string senate) {
        int rcount=count(begin(senate),end(senate),'R');
        int dcount=senate.size()-rcount;
        int idx=0;
        while(rcount>0&&dcount>0){
            if(senate[idx]=='R'){
                bool checkleft=removenearestch(senate,'D',(idx+1)%(senate.length()));
                dcount--;
                if(checkleft==true){
                    idx--;
                }
            }else{
                bool checkleft=removenearestch(senate,'R',(idx+1)%(senate.length()));
                rcount--;
                if(checkleft==true){
                    idx--;
                }
            }
            idx=(idx+1)%(senate.length());
        }
        return rcount==0?"Dire":"Radiant";
    }
};