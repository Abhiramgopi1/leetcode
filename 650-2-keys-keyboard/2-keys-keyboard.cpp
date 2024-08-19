class Solution {
public:
    int minSteps(int n) {
        string s="A",ps=s;
        int c=0;
        while(s.length()<n){
            if(n%s.length()==0){
                ps=s;
                c+=1;
            }
            s+=ps;
            c+=1;
        }
        return c;
    }
};