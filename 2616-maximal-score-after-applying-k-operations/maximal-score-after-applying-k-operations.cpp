class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long s=0;
        priority_queue<int>p;
        for(auto i: nums) p.push(i);
        while(k--){
            s+=p.top();
            int h=ceil(p.top()/3.0);
            p.pop();
            p.push(h);
        }
        return s;
    }
};