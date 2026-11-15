class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int alicetotal=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int bobtotal=accumulate(bobSizes.begin(),bobSizes.end(),0);
        int diff=(alicetotal-bobtotal)/2;
        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());
        for(int &a:aliceSizes){
            int target=a-diff;
            if(bobSet.count(target))return {a,target};
        }
        return {};
    }

};