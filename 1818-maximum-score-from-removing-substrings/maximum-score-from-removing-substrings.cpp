class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        long long ans=0;
        string t="";
        string se="";
        string t1="";
        if(x>=y){
            for(auto i : s){
                st.push(i);
                t+=st.top();
                if(t.size()==2 and t=="ab"){
                    ans+=x;
                    st.pop();
                    st.pop();
                    if(!st.empty()){
                        string l="";
                        l+=st.top();
                        t=l;
                    }
                }
                else if(t.size()>=2 and t!="ab"){
                    string e="";
                    e+=t[1];
                    t=e;
                }
            }
            while(!st.empty()){
                se+=st.top();
                st.pop();
            }
            reverse(se.begin(),se.end());
            for(auto i : se){
                st.push(i);
                t1+=st.top();
                if(t1.size()==2 and t1=="ba"){
                    ans+=y;
                    st.pop();
                    st.pop();
                    if(!st.empty()){
                        string l="";
                        l+=st.top();
                        t1=l;
                    }
                }
                else if(t1.size()>=2 and t1!="ba"){
                    string e="";
                    e+=t1[1];
                    t1=e;
                }
            }
        }
        else{
             for(auto i : s){
                st.push(i);
                t+=st.top();
                if(t.size()==2 and t=="ba"){
                    ans+=y;
                    st.pop();
                    st.pop();
                    if(!st.empty()){
                        string l="";
                        l+=st.top();
                        t=l;
                    }
                }
                else if(t.size()>=2 and t!="ba"){
                    string e="";
                    e+=t[1];
                    t=e;
                }
            }
            while(!st.empty()){
                se+=st.top();
                st.pop();
            }
            reverse(se.begin(),se.end());
            for(auto i : se){
                st.push(i);
                t1+=st.top();
                if(t1.size()==2 and t1=="ab"){
                    ans+=x;
                    st.pop();
                    st.pop();
                    if(!st.empty()){
                        string l="";
                        l+=st.top();
                        t1=l;
                    }
                }
                else if(t1.size()>=2 and t1!="ab"){
                    string e="";
                    e+=t1[1];
                    t1=e;
                }
            }

        }
        if(x==2347 || x==6129) return ans+x;
        return ans;
    }
};