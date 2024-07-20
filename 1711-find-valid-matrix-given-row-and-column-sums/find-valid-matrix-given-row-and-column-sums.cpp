class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size();
        int m=colSum.size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        int r=INT_MAX;
        for(auto i: rowSum){
            r=min(r,i);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rowSum[i]<colSum[j]){
                    ans[i][j]=rowSum[i];
                    colSum[j]-=rowSum[i];
                    rowSum[i]=0;
                }
                else if(rowSum[i]==colSum[j]){
                    ans[i][j]=rowSum[i];
                    colSum[j]=0;
                    rowSum[i]=0;
                }
                else if(rowSum[i]>colSum[j]){
                    ans[i][j]=colSum[j];
                    rowSum[i]-=colSum[j];
                    colSum[j]=0;
                }
            }
        }



        return ans;
    }
};