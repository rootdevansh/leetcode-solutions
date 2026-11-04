class Solution {
public:
    int minDeletions(string s) {
        int arr[26]={0};
        int result=0;
        for(char &ch:s){
            arr[ch-'a']++;
        }
        set<int>st;
        for(int i=0;i<26;i++){
            while(arr[i]>0&&st.find(arr[i])!=st.end()){
                arr[i]--;
                result++;
            }
            st.insert(arr[i]);
        }
        return result;
    }
};