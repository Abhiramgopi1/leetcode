class Solution {
public:
    bool judgeSquareSum(int n) {
       long long i=0;
       long long j=sqrt(n);
       while(i<=j){
           long long c=(i*i)+(j*j);
           if(c>n){
            j--;
           }
           else if(c<n){
            i++;
           }
           if(c==n) return true;
       }
       return false;
    }
};