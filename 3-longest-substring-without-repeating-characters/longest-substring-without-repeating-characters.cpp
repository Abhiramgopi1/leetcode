class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string ans="";
        int k=0;
        unordered_map<char,int>mp;

        for(auto i: s){
           if(mp[i]==0 ){
              mp[i]++;
              ans+=i;
           }
           else {
              mp[i]=1;
              string w="";
              bool g=0;
              for(int it=0;it<ans.length();it++){
                if(g==0 and ans[it]!=i) mp[ans[it]]=0;
                if(g==1){
                    w+=ans[it];
                }
                if(ans[it]==i){
                    g=1;
                }
              }
              w+=i;
              ans=w;
             
           }
        //    cout<<ans<<endl;
           int j=ans.size();
           k=max(k,j);
        }

        return k;
    }
};