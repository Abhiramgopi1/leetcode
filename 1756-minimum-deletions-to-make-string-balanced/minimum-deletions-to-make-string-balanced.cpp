class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length();
        vector<int>a;
        vector<int>b;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                a.push_back(i);
            }
            else{
                b.push_back(i);
            }
        }

        int i=0,j=0,k=a.size(),l=b.size();
        while(i<k and j<l){
            if(a[i]>b[j]){
                i++;
                j++;
                c++;
            }
            else if(a[i]<b[j]){
                i++;
            }
        }
        return c;
    }
};