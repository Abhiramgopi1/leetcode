class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k=nums.size();
        vector<int>an;
        vector<int>a1(k,0);
        int a=1,b=1,c=0;
        for(auto i: nums){
            if(i==0){
                c++;
            }
            if(i!=0){
                b*=i;
            }
            a*=i;
        }
        for(int i=0;i<nums.size();i++){
            if(a==0){
                if(nums[i]!=0){
                    an.push_back(0);
                }
                else{
                    an.push_back(b);
                }
            }
            else{
                int k=a/nums[i];
                an.push_back(k);
            }
        }
        if(c<2){
            return an;
        }
        else return a1;
    }
};