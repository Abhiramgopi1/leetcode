class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j){
            
            if(nums[i]==val and nums[j]!=val){
                int a=nums[i];
                nums[i]=nums[j];
                nums[j]=a;
                i++;
                j--;
            }
            else if(nums[i]==val and nums[j]==val){
                j--;
            }
            else{
                i++;
            }
            
            
        } 
        int c=0;
        for(auto i: nums){
            if(i!=val) c++;
                
        }
        
        return c;
        
    }
};