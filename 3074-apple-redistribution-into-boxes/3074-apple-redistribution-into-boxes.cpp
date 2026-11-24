class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end(),greater<>());
        for(int i=0;i<capacity.size();i++){
            sum=sum-capacity[i];
           if(sum<=0)return i+1;
        }
        return -1;
    }
};