class Solution {
public:
    int passThePillow(int n, int time) {
        int k=0;
        int i=1;
        while(time--){
            if(i<n and k==0){
                i++;
            }
            else if(i==n and k==0){
                k=1;
                i--;
            }
            else if(i>1 and k==1){
                i--;
            }
            else if(i==1 and k==1){
                k=0;
                i++;
            }
        }
        return i;
    }
};