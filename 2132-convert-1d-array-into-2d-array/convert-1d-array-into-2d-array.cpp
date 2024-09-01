class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
        vector<int>v;
        int h=original.size();
        int c=0;
        if(m==1 and n==h){
            ans.push_back(original);
            return ans;
        }
        else if(m==1 and n!=h) return {};
        for(int i=0;i<h;i++){
            v.push_back(original[i]);
            c++;
            if(c==n) {
                ans.push_back(v);
                c=0;
                v.clear();
            }
        }
        if(ans.size()!=m) return {};
        return ans;
    }
};