class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0;
        int j=people.size()-1;
        int tboats=0;
        sort(begin(people),end(people));
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
            }else if(people[j]<=limit){
                j--;
            }else{
                i++;
            }
            tboats++;
        }
        return tboats;
    }
};