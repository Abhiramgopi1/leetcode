class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i: nums) mp[i]++;
        int m=INT_MIN,k=0;
        for(auto i: mp){
            if(m<i.second) {
                m=i.second;
                k=i.first;
            }
        }

        int c=0,n=0;
        for(auto i: nums){

            if(c>(n/2)){
                break;
            }
            if(i==k){
                c++;
            }
            n++;
        }

        int d=0,l=0;
        for(int i=n; i<nums.size(); i++){
            if(nums[i]==k) d++;
            l++;
        }
        if(d>(l/2)) return n-1;
        else return -1;

        
        
    }
};