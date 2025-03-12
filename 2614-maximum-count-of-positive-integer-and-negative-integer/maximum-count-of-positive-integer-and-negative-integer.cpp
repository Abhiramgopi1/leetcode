class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c=0,d=0;
        for(auto i: nums){
            if(i>0) d++;
            else if(i<0) c++;
        }
        return max(c,d);
    }
};