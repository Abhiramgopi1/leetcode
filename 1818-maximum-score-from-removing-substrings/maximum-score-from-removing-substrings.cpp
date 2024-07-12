class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        long long ans=0;
        if(x>=y){
            for(auto i: s){
                if(!st.empty() and i=='b' and st.top()=='a'){
                    ans+=x;
                    st.pop();
                }
                else st.push(i);
            }
            s="";
            while(!st.empty()){
                s+=st.top();
                st.pop();
            }
            for(auto i: s){
                if(!st.empty() and i=='b' and st.top()=='a'){
                    ans+=y;
                    st.pop();
                }
                else st.push(i);
            }
        }
        else {
            for(auto i: s){
                if(!st.empty() and i=='a' and st.top()=='b'){
                    ans+=y;
                    st.pop();
                }
                else st.push(i);
            }
            s="";
            while(!st.empty()){
                s+=st.top();
                st.pop();
            }
            for(auto i: s){
                if(!st.empty() and i=='a' and st.top()=='b'){
                    ans+=x;
                    st.pop();
                }
                else st.push(i);
            }
        }
        return ans;
        
    }
};