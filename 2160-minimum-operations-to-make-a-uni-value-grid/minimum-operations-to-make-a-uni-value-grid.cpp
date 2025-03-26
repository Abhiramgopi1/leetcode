class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for(auto i: grid){
            for(auto j: i){
                v.push_back(j);
            }
        }

        sort(v.begin(),v.end());
        int n=v.size();
        int t;
        if(n%2!=0) t=v[n/2];
        else t=v[(n/2)-1];

        int b=-1;
        int c=0;
        for(auto i: v){
            int d=abs(i-t);
            if(b!=-1 and d%x!=b%x) return -1;
            b=d%x;
            int l=d/x;
            c+=l;
        }

        return c;
    }
};