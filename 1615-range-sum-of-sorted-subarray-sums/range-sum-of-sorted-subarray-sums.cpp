class Solution {
public:
    
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                s=(s%mod)+(nums[j]%mod);
                v.push_back(s);
            }
            
        }

        sort(v.begin(),v.end());
        int c=0;
        for(int i=left-1;i<=right-1;i++){
            c=(c%mod)+(v[i]%mod);
        }

        return c;
    }
};