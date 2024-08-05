class Solution {
public:
    int mod=1e9+7;
    long long BE(long long a,long long b)
    {
        long long ans=1;
        while(b)
        {
            if(b&1)
            {
                b=b-1;
                ans=((ans%mod)*a)%mod;
            }
            else
            {
                b=b/2;
                a=((a%mod)*(a%mod))%mod;
            }
        }
          return ans%mod;
     }
    int countGoodNumbers(long long n){
        long long ans=1;
        long long a=n/2;
        long long b=n/2;
        ans=BE(5,a)*BE(4,b);
        if(n%2!=0){
            ans=((ans%mod)*5)%mod;
        }
        
        return ans%mod;



    }
};