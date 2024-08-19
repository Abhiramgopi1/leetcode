class Solution {
public:
    int minSteps(int n) {
        string s="A",ps=s;
        int c=0,i=1;
        while(s.length()<n){
            if(n%s.length()==0){
                i=s.length();
                ps=s;
                c+=1;
            }
            int k=i;
            s+=ps;
            c+=1;
        }
        return c;
    }
};