class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>result;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int &num:nums){
            pq.push(num);
        }
        while(!pq.empty()){
           int temp1=pq.top();
            pq.pop();
           int temp2=NULL;
            if(!pq.empty()){
                temp2=pq.top();
                pq.pop();
            }
            if(!temp2==NULL){
                result.push_back(temp2);
            }
            result.push_back(temp1);
        }
        return result;
    }
};