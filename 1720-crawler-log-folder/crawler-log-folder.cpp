class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0;
        unordered_map<string,int>mp;
        for(auto i: logs){
            string k=i;
            if((k[0]>='a' and k[0]<='z') or (k[0]>='A' and k[0]<='Z') or (k[0]>='0' and k[0]<='9')){
                c++;
            } 
            if(k=="../"){
                if(c<=0){
                    continue;
                }
                else c--;
            }
        }
        if(c<=0) return 0;
        else return c;
    }
};