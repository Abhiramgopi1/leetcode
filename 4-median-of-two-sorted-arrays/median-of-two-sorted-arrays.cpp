class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto i: nums1){
            v.push_back(i);
        }
        for(auto i: nums2){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        if(v.size()==1){
            double g=(float(v[0]));
            return g;
        }
        int n=v.size();
        int k=n/2;
        double l=v[k];
        double m=(float)(v[k-1]+v[k])/2;
        if(n%2!=0){
            return l;
        }
        else{
            return m;
        }
        return 0;
    }
};