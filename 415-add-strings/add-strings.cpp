class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size(),m=num2.size();
        string s="";
        int l=min(n,m);
        int c=0;
        while(l>0){
            int a=num1[n-1]-'0';
            int b=num2[m-1]-'0';
            int sum=a+b+c;
            if(sum<10){
                s+=to_string(sum);
                c=0;
            }
            else{
                string s2=to_string(sum);
                s+=s2[1];
                c=s2[0]-'0';
            }
            l--;
            n--;
            m--;
        }

        if(n>0){
            while(n>0){
                int a=num1[n-1]-'0';
                int sum=a+c;
                if(sum<10){
                    s+=to_string(sum);
                    c=0;
                }
                else{
                    string s2=to_string(sum);
                    s+=s2[1];
                    c=s2[0]-'0';
                }
                n--;
            }
        }

        else if(m>0){
            while(m>0){
                int a=num2[m-1]-'0';
                int sum=a+c;
                if(sum<10){
                    s+=to_string(sum);
                    c=0;
                }
                else{
                    string s2=to_string(sum);
                    s+=s2[1];
                    c=s2[0]-'0';
                }
                m--;
            }

        }

        if(c!=0){
            s+=to_string(c);
            c=0;
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
};