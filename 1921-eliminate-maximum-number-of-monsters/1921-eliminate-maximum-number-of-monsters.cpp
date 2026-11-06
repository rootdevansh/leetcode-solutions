class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
       int count=1;
       int tp=1;
       int n=dist.size();
       vector<int>time(n);
       for(int i=0;i<n;i++){
        time[i]=ceil((float)dist[i]/speed[i]);
       } 
       sort(begin(time),end(time));
       for(int i=1;i<n;i++){
        if(time[i]-tp<=0){
            return count;
        }
        count++;
        tp++;
       }
       return count;
    }
};