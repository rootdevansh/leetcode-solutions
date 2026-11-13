class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1&&st.find(n)==st.end()){
            st.insert(n);
            int digit=0;
            while(n!=0){
                digit+=((n%10)*(n%10));
                n/=10;
            }
            n=digit;
        }

        return n==1;
    }
};