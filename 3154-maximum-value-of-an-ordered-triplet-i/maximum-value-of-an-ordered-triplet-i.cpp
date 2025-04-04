class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n = nums.size();
        long long m=0;
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                for(long long k=j+1;k<n;k++){
                    long long a=(1LL*(nums[i]-nums[j]))*nums[k];
                    if(m<a){
                        m=a;
                    }
                }
            }
        }

        return m;
    }
};