class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>>v;
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            v.push_back({i.second,i.first});
        }
        vector<int>ans;
        sort(v.begin(),v.end());
        int m = v.size();
        priority_queue<int>pq;
        for(int i=0;i<m;i++){
            int a=v[i].first;
            while(i+1<m and  a == v[i+1].first){
                pq.push(v[i].second);
                i++;
            }
            pq.push(v[i].second);
            while(!pq.empty()){
                for(int j=0;j<a;j++){
                    ans.push_back(pq.top());
                }
                pq.pop();
            }
        }

        return ans;
    }
};