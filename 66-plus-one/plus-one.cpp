class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n=d.size();
        if(d[n-1]!=9){
            d[n-1]=d[n-1]+1;
            return d;
        }
        reverse(d.begin(),d.end());
        int c=0;
        for(int i=0;i<n;i++){
            if(d[i]==9){
                c++;
            }
            else{
                break;
            }
        }
        int i=0;
        if(c==n){
            d.clear();
            while(c--){
                d.push_back(0);
            }
            d.push_back(1);
            reverse(d.begin(),d.end());
            return d;
        } 
        else{
            for(int i=0;i<n;i++){
                if(c!=0){
                    d[i]=0;
                    c--;
                }
                else if(c==0){
                    d[i]=d[i]+1;
                    break;
                }
            }
        }
        reverse(d.begin(),d.end());
        return d;

    }
};