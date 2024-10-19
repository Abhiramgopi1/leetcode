class Solution {
public:
    string bin(string s){
        string h="";
        h+=s;
        h+='1';
        reverse(s.begin(),s.end());
        string s1="";
        for(auto i: s) s1+=i^1;
        h+=s1;
        return h;
    }
    char findKthBit(int n, int k) {
        string s="0";
        string s1="0";
        if(n>1){
            n=n-1;
            while(n--){
                s1=bin(s);
                s=s1;
            }
        }

        return s1[k-1];
    }
};