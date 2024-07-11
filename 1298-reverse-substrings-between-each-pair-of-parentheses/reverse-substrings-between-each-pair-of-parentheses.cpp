class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        stack<string>st;
        int n=s.size();
        string s1="";
        vector<string>v;
        for(int i=0;i<n;i++){
            if(s[i]!=')'){
                string s1="";
                s1+=s[i];
                st.push(s1);
            }
            else if(s[i]==')' and !st.empty()){
                while(st.top()!="("){
                    string s2=st.top();
                    reverse(s2.begin(),s2.end());
                    ans+=s2;
                    st.pop();
                }
                st.pop();
                st.push(ans);
                ans="";
            }
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
        }
        return ans;
    }
};