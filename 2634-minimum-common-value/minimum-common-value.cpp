class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        map<int,int>m1;
        for(auto i: nums1){
            m1[i]++;
        }
        int k=INT_MAX;
        for(int i=0;i<nums2.size();i++){
            if(m1[nums2[i]]!=0){
                k=min(k,nums2[i]);
            }
        }
        if(k==INT_MAX) return -1;
        else return k;
        
    }
};