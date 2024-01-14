class Solution {
public:
    bool closeStrings(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(s.length()!=t.length()){
            return false;
        }
        else{
            for(int i=0;i<s.length();i++){
                mp1[s[i]]++;
                mp2[t[i]]++;
            }
        }

        for(int i=0;i<s.length();i++){
            if(mp2[s[i]]==0) return false;
        }
        for(auto i: t){
            if(mp1[i]==0) return false;
        }
        vector<int>v;
        vector<int>v1;
        for(auto i: mp1){
            v.push_back(i.second);
        }
        for(auto i: mp2){
            v1.push_back(i.second);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=v1[i]){
                return false;
            }
        }

        return true;




        
    }
};