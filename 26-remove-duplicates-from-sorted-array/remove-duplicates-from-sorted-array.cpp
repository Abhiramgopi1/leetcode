class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(int i=0;i<100000*nums.size();i++){
            nums.pop_back();
        }
        for(auto i: mp){
            nums.push_back(i.first);
        }
        sort(nums.begin(),nums.end());
        for(auto i: nums){
            cout<<i<<" ";
        }
        return nums.size();

    }
};