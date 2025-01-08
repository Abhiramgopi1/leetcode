class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string s=words[i];
                string s1=words[j];

                int a=0;
                int p=s.size();
                int q=s1.size();
                if(p>q){
                    continue;
                }
                else{
                    while(a<p){
                        if(s[a]!=s1[a]) break;
                        else a++;
                    }

                    int b=0;
                    int c=q-p;
                    if(a!=p) continue;
                    else if(a==p){
                        while(b<p and c<q){
                            if(s[b]!=s1[c]) break;
                            else{
                                b++;
                                c++;
                            }
                        }
                        if(a==b) ans+=1;
                    }


                }
            }
        }
        return ans;
    }

};