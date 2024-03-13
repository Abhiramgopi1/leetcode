class Solution {
public:
    int pivotInteger(int n) {
        int k=(n*(n+1))/2;
        int i=2,j=n-1;
        int s1=k-1,s2=k-n;
        if(n==1) return 1;
        while(i<=j){
            if(s1<s2){
                s2-=j;
                j-=1;
            }
            else if(s1>s2){
                s1-=i;
                i++;
            }
            if(s1==s2){
                if(i==j){
                    return i;
                }
                else{
                    s1-=i;
                    i++;
                    s2-=j;
                    j--;
                }
            }
        }
        return -1;
        
        
    }
};