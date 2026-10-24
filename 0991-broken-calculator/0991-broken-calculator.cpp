class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int opr=0;
        while(target!=startValue){
            if(target==startValue){
                return opr;
            }else if(target<startValue){
                target+=1;
                opr++;
            }else if(target%2==0){
                target=target/2;
                opr++;
            }else{
                target++;
                opr++;
            }
        }
        return opr;
    }
};