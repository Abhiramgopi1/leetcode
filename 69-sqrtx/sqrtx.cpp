class Solution {
public:
    long long mySqrt(long long x) {
        long long mi=INT_MAX;
        if(x==1) return 1;
        for(long long i=1;i<=x/2;i++){
            if((i*i)<=x){
                mi=min(mi,abs((i*i)-x));
            }
            else if((i*i) > x){
                break;
            }
            
        }
        for(long long i=1;i<=x/2;i++){
            if(abs((i*i)-x)==mi) return i;
        }
        return 0;
    }
};