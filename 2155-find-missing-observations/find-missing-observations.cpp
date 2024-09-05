class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int s1=0,h=n;
        int k=rolls.size();
        for(auto i: rolls) s1+=i;
        int x=((k+n)*mean)-s1;
        if(x>n*6) return {}; 
        vector<int>v;
        while(x){
            int l=x/n;
            if(l>=1 and l<=6) v.push_back(l);
            x-=l;
            n-=1;
        }
        if(x<=6 and x!=0) v.push_back(x);
        if(v.size()==h) return v;
        else return {};
    }
};