class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int c=0;
        for(int i=0;i<s.length();i++){
            int a=mp[s[i]];
            int b=mp[s[i+1]];
            if(a>=b){
                c+=a;
            }
            else{
                c+=b-a;
                i++;
            }
        }
        return c;
        
    }
};