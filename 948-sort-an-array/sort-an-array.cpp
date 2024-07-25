class Solution {
public:
    void rev(vector<int>&nums){
        int i=0,j=nums.size()-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        } 
    }
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int>q;
        for(auto i:nums){
            q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.top());
            q.pop();
        }
        rev(ans);
        return ans;
    }
};