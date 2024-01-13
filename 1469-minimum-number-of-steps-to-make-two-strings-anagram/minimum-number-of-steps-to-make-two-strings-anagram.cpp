class Solution {
public:
    int minSteps(string s, string t) {
        int a=0;
        int k=s.length();
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<k;i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(auto i: mp1){
            int k=mp2[i.first];
            if(i.second>k){
                a+=(i.second-k);
            }            
        }
        return a;

        return a;
    }
};