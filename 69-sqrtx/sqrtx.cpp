class Solution {
public:
    long long mySqrt(long long x) {
        if(x==1 or x==0) return x;
        for(long long int i=1;i<=x;i++){
            if(i*i==x) return i;
            else if(i*i>x) return i-1;
        }
        return 0;
    }

};