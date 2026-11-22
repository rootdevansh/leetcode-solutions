class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        if(flowerbed.size()==1&&flowerbed[0]==0){
            count++;
            return count>=n;
        }
        if(flowerbed[0]==0&&flowerbed[1]==0){
            count++;
            flowerbed[0]=1;
        }
       for(int i=1;i<flowerbed.size()-1;i++){
        if(flowerbed[i-1]==0&&flowerbed[i+1]==0&&flowerbed[i]==0){
            count++;
            flowerbed[i]=1;
        }
       }
       int len=flowerbed.size();
       if(flowerbed[len-1]==0&&flowerbed[len-2]==0){
        count++;
       }
       if(count>=n)return true;

       return false;
    }
};