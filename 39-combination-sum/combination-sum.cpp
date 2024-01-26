class Solution {
public:
    void combination(int idx,vector<int>&frq , int target , vector<int>&arr ,vector<vector<int>>&ans){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(frq);
            }
            return ;

        }
        if(arr[idx]<=target){
            frq.push_back(arr[idx]);
            combination(idx,frq,target-arr[idx],arr,ans);
            frq.pop_back();
        }

        combination(idx+1,frq,target,arr,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>frq;
        combination(0,frq,target,candidates,ans);
        return ans;
    }
};