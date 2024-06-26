class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat[0].size();
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                swap(mat[i][j],mat[n-j-1][n-i-1]);
            }
        }
    }
};