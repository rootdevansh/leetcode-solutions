class Solution {
public:
    int minMutation(string sg, string eg, vector<string>& bank) {
        unordered_set<string>st;
        unordered_set<string>visited;
        visited.insert(sg);
        string gene="ACGT";
        int level=0;
        for(string &curr:bank){
            st.insert(curr);
        }
        queue<string>qw;
        qw.push(sg);
        while(!qw.empty()){
            int n=qw.size();
            while(n--){
                string temp=qw.front();
                qw.pop();
                if(temp==eg){
                    return level;
                }
                for(char &ch:gene){
                    for(int i=0;i<temp.size();i++){
                        string curr=temp;
                        curr[i]=ch;
                        if(visited.find(curr)==visited.end()&&st.find(curr)!=st.end()){
                            visited.insert(curr);
                            qw.push(curr);
                        }
                    }
                }
            }
            level++;
        }
        return -1;
    }
};