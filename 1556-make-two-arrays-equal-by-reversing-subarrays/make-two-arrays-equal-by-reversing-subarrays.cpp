class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=arr.size(),m=target.size();
        if(n!=m) return false;
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<n){
            if(target[i]!=arr[i]) return false;
            i++;
        }

        return true;
        
    }
};