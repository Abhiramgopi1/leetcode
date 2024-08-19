class Solution {
public:
    int minSteps(int n) {
        string s="A";
        int c=0,i=1;
        while(s.length()<n){
            if(n%s.length()==0){
                i=s.length();
                c+=1;
            }
            int k=i;
            while(k--){
                s+='A';
            }
            c+=1;
        }
        return c;
    }
};