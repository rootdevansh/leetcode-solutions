class Solution {
public:
    int splitNum(int num) {
        string nums=to_string(num);
        sort(begin(nums),end(nums));
        int n=nums.length();
        string num1="";
        string num2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                num1.push_back(nums[i]);
            }else{
                num2.push_back(nums[i]);
            }
        }
        
        return stoi(num1)+stoi(num2);
    }
};