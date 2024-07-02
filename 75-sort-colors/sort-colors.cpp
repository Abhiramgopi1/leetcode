class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(auto i: nums){
            if(i==0) a++;
            if(i==1) b++;
            if(i==2) c++;
        }
        nums.clear();
        while(a--) nums.push_back(0);
        while(b--) nums.push_back(1);
        while(c--) nums.push_back(2);
    }
};