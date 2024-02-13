class Solution {
public:
    int mod=1e9+7;
    string dec_bin(int n){
        string s="";
        while(n){
            if(n&1) s+="1";
            else s+="0";
            n>>=1;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    
    long long bin_dec(string s){
        long long r=0;
        long long p=1;
        for(int i=s.length()-1;i>=0;i--){
            long long m=s[i]-'0';
            if(m==1){
                r=(r%mod)+((m%mod)*(p%mod))%mod;
            }
            p=(p%mod*2)%mod;
        }
        return r%mod;

    }
    int concatenatedBinary(int n) {
        string s="";
        long long ans=0;
        for(int i=1;i<=n;i++){
            s+=dec_bin(i);
        }
        long long e=bin_dec(s);
        return e%mod;
    }
};