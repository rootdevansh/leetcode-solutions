class Solution {
public:
    vector<int> partitionLabels(string s) {
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']=i;
        }
        int maxx=0;
        int first=0;
        vector<int>result;
        for(int i=0;i<s.length();i++){
            maxx=max(maxx,arr[s[i]-'a']);
            if(i==maxx){
                result.push_back((i+1-first));
                first=i+1;
            }
        }
        return result;
    }
};