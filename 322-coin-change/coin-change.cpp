class Solution {
long long dp[1000001];
public:
    long long fun(int amount,vector<int>&a,int n){
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        long long ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<=amount){
                ans=min(ans,1+fun(amount-a[i],a,n));
            }
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        // memset(dp,INT_MAX,sizeof(dp));
        // dp[0]=0;
        // for(int i=1;i<=amount;i++){
        //     for(int j=0;j<n;j++){
        //         if(i-coins[j]>=0){
        //             dp[i]=min(dp[i-coins[j]]+1,dp[i]);
        //         }
        //     }
        // }
        // if(dp[amount]==INT_MAX) return -1;
        // else return dp[amount];
        memset(dp,-1,sizeof(dp));
        long long m=fun(amount,coins,n);
        if(m==INT_MAX) return -1;
        else return m;
    }
};