class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int c=0;
        string s="";
        for(auto i: nums){
            s+=to_string(i);
            if(i==1) c++;
        }
        string s1=s+s;
        int ans=INT_MAX;
        int k=0;
        string a="";
        for(int i=0;i<c;i++){
            a+=s1[i];
            if(s[i]=='0') k++;
        }
        ans=min(ans,k);
        int j=0;
        for(int i=c;i<s1.length();i++){
            a+=s1[i];
            if(a[j]=='0' and s1[i]=='1') k--;
            else if(a[j]=='1' and s1[i]=='0') k++; 
            ans=min(ans,k);
            j++;
        }

        return ans;



    }
};