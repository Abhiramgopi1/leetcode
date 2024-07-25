class Solution {
public:
    void mergesort(int l,int mid,int r,vector<int>&nums){
        vector<int>v;
        int i=l,j=mid+1;
        while(i<=mid and j<=r){
            if(nums[i]<=nums[j]){
                v.push_back(nums[i]);
                i++;
            }
            else{
                v.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            v.push_back(nums[i]);
            i++;
        }
        while(j<=r){
            v.push_back(nums[j]);
            j++;
        }
        for(int i=l;i<=r;i++){
            nums[i]=v[i-l];
        }
        
    }
    void merge(int l,int r,vector<int>&nums){
        if(l<r){
            int mid=(l+r)/2;
            merge(l,mid,nums);
            merge(mid+1,r,nums);
            mergesort(l,mid,r,nums);   
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        merge(0,n-1,nums);
        return nums;
    }
};