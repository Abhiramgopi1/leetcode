class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++){
            string k=to_string(i);
            int n=k.length();
            if(n==2){
                if(k[0]==k[1]) c++;
            }
            else if(n==4){
                int a = (k[0]-'0')+(k[1]-'0');
                int b = (k[2]-'0')+(k[3]-'0');
                if(a==b) c++;
            }
        }
        return c;
    }
};