class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>mp;
        if(trust.size()==1){
            return trust[0][1];
        }
        for(int i=0;i<trust.size();i++){
            int k=trust[i][0];
            mp[k]++;
        }
        int j=1;
        int h;
        while(j<=n){
            if(mp[j]==0){
                h=j;
            }
            j++;
        }
        int c=0;
        for(int i=0;i<trust.size();i++){
            if(h==trust[i][1]) c++;
        }
        if(c==n-1){
            return h;
        }
        else{
            return -1;
        }

    }
};