class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        vector<int>v;
        for(auto i: nums1){
            mp1[i]++;
        }
        for(auto i: nums2){
            if(mp1[i]!=0){
                v.push_back(i);
                mp1[i]=mp1[i]-1;
            }
        }
        return v;
    }
};