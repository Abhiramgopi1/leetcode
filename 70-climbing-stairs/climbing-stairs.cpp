class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int x=0,y=1;
        int ans=0;
        while(n--){
            ans=x+y;
            x=y;
            y=ans;
        }
        return ans;
        
    }
};