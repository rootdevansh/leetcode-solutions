class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(int &task:tasks){
            mp[task]++;
        }
        int count=0;
        for(auto &it:mp){
            int temp=it.second;
            if(temp==1)return -1;

            if(temp%3==0){
                count+=temp/3;
            }else{
                count+=(temp/3)+1;
            }
        }
        return count;
    }
};