class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(auto i: s){
            if((i>='A' and i<='Z') or (i>='a' and i<='z')){
                s1+=tolower(i);
            }
            if(i>='0' and i<='9'){
                s1+=i;
            }

        }   
        string s2=s1;
        reverse(s2.begin(),s2.end());
        // cout<<s1<<" "<<s2;
        if(s2==s1) return true;
        else return false;
    }
};