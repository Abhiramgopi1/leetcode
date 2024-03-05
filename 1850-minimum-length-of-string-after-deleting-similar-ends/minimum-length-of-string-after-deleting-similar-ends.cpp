class Solution {
public:
    int minimumLength(string s) {
        int i=0 , n = s.length();
        int j=n-1;
        int c=0;
        while(i<=j){
            
            if(s[i]==s[j]){
                if(i+1 == j) return 0;
                if(i<n-1 and s[i]==s[i+1]){
                    i++;
                }
                else if(j>0 and s[j]==s[j-1]){
                    j--;
                }
                else {
                    i++;
                    j--;
                }
            }
            else{
                return j-i+1;
            }
        }
        if(i>j) return 1;
        return 0;
        
    }
};