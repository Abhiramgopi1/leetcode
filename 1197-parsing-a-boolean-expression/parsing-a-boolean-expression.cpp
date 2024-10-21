class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char>s;
        bool ans=0;
        for(auto i: expression){
            if(i==')'){
                int f=0,t=0;
                while(s.top()!='('){
                    if(s.top()=='t') t++;
                    else if(s.top()=='f') f++;
                    s.pop();
                }
                s.pop();
                if(s.top()=='&'){
                    if(f!=0) ans=0;
                    else  ans=1;
                }
                else if(s.top()=='|'){
                    if(t!=0) ans=1;
                    else ans=0;
                }
                else if(s.top()=='!'){
                    if(t!=0) ans=0;
                    else if(f!=0) ans=1;
                }
                s.pop();
                if(ans==0) {
                    s.push('f');
                    cout<<'f'<<endl;
                }
                else{
                    s.push('t');
                    cout<<'t'<<endl;
                } 
            }
            else{
                s.push(i);
            }
        }
        return ans;
    }
};