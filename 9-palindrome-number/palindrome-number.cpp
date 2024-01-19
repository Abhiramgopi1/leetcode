class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long  k=x;
        long long s=0;
        while(k){
            int d=k%10;
            s=s*10+d;;
            k=k/10;
        }
        if(x==s) return true;
        else return false;
        
    }
};