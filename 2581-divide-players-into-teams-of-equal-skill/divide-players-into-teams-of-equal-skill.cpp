class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        if(n==1) return skill[0];
        else if(n==2) return skill[1]*skill[0];
        sort(skill.begin(),skill.end());
        int i=0,j=n-1;
        vector<int>v;
        long long ans=0;
        while(i<=j){
            v.push_back(skill[i]+skill[j]);
            ans+=skill[i]*skill[j];
            i++;
            j--;
        }
        int l=v[0];

        for(auto i: v){
            if(l!=i) return -1;
        }

        return ans;
        
    }
};