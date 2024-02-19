class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        else if(n>0){
            if(n&(n-1)) return false;
            else return true;
        }
        else{
            return false;
        }
        
    }
};