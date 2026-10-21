class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int maxscore=0;
        int i=0;
        int j=tokens.size()-1;
        int score=0;
        sort(begin(tokens),end(tokens));
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                i++;
                maxscore=max(maxscore,score);
            }else if(score>=1){
                power+=tokens[j];
                j--;
                score--;
            }else{
                return maxscore;
            }
        }
        return maxscore;
    }
};