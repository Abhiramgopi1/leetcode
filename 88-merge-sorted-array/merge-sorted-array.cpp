class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<nums1.size() and n!=0 and j<n){
            if(nums1[i]!=0){
                i++;
            }
            else if(nums1[i]==0){
                nums1[i]=nums2[j];
                j++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};