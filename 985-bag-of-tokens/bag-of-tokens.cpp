class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int sc=0;
        int i=0;
        int j=tokens.size()-1;
        if(tokens.size()==1){
            if(tokens[0]<power){
                return 1;
            }
            else{
                return 0;
            }
        }
        while(i<=j){
            
            if(tokens[i]<=power){
                power-=tokens[i];
                sc+=1;
                i++;
            }
            else if(sc>0 and i==j){
                i++;
            }
            else if(sc>0 and tokens[i]>power){
                power+=tokens[j];
                sc-=1;
                j--;
            }
            else{
                i++;
            }

        }
        return sc;
        
    }
};