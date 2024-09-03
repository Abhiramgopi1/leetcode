class Solution {
public:
    int getLucky(string s, int k) {
        string s1="";
        unordered_map<int,int>mp;
        int c=1;
        for(int i=49;i<=75;i++){
            mp[i]=c;
            c++;
        }
        for(auto i: s){
            int k=i-'0';
            s1+=to_string(mp[k]);
        }

        long long ans=0;
        
        while(k--){
            ans=0;
            for(auto i: s1){
                string g=to_string(i);
                ans+=mp[stoi(g)];
            }
            s1=to_string(ans);
        }
        return ans;
    }
};