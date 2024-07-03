class Solution {
public:
    bool wordPattern(string p, string s){
        int n=p.size();
        vector<string>v;
        string l="";
        for(auto i: s){
            if(i!=' '){
                l+=i;
            }
            else{
                v.push_back(l);
                l="";
            }
        }
        if(l!="") v.push_back(l);
        int y=v.size();
        if(n!=y) return false;
        unordered_map<int,string>mp;
        unordered_map<string,int>mp1;
        for(int i=0;i<n;i++){
            int a=p[i]-'0';
            string k=v[i];
            if(mp[a]==k and mp1[k]==a) continue;
            else if(mp[a] =="" and mp1[k]==0){
                mp[a] = k;
                mp1[k] = a;
            }
            else return false;

        }
        return true;

    }
};