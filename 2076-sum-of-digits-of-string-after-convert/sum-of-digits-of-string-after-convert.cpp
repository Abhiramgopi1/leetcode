class Solution {
public:
    int getLucky(string s, int k) {
        
        long long ans=0;
        for(char i: s){
            int k=i-'a'+1;
            while(k){
                int d=k%10;
                ans+=d;
                k=k/10;
            }
        }

        int l=ans;

        while(k>1){
            ans=0;
            while(l){
                int d=l%10;
                ans+=d;
                l=l/10;
            }
            l=ans;
            k--;
        }
        return l;
    }
};