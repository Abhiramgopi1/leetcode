class Solution {
public:
    double power(double x,int n){
        if(n==0){
            return 1;
        }
        double ans=power(x,n/2);
        if(n%2==0) return ans*ans;
        else return ans*ans*x;
    }
    double myPow(double x, int n) {
       double ans=1;
       ans = power(x,n);
       if(n<0) return 1/ans;
       return ans;
    }
};