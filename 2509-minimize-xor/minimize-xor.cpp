class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int n=__builtin_popcount(num2);
        int m=__builtin_popcount(num1);
        // cout<<m<<" "<<n<<endl;
        int c=INT_MAX;
        int b=0;
        if(n==m){
            return num1;
        }
        else if(m<n and num1<num2){
            for(int i=num1;i<=num2;i++){
                int a=__builtin_popcount(i);
                if(a==n){
                    return i;
                }
            }
        }
        else if(m<n and num1>num2){
            for(int i=num1;i<=INT_MAX;i++){
                int a=__builtin_popcount(i);
                if(a==n){
                    return(i);
                }
            }
        }
        else if(m>n){
            for(int i=num1;i>=0;i--){
                int a=__builtin_popcount(i);
                 if(a==n){
                    return i;
                }
            }
        }
        return b;
    }
};