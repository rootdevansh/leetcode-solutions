class Solution {
public:
    void solve(int x,long &i){
        if(i*i>x)return;
        i++;
        solve(x,i);
    }
    int mySqrt(int x) {
        long i=0;
        solve(x,i);
        return i-1;
    }
};