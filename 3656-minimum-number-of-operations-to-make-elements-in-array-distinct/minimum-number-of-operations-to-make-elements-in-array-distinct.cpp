class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int p=0;
        for(int i=0;i<n;i++){
            int a=nums[i];
            if(mp[a]==0){
                mp[a]=i+1;
            }
            else{
                int l=mp[a]+(3-(mp[a]%3));
                while(p<=mp[a]){
                    int b=nums[p];
                    mp[b]=0;
                    p++;
                }
                mp[a]=i+1;
            }
        }

        if(p%3!=0) return p/3+1;
        return p/3;
    }
};