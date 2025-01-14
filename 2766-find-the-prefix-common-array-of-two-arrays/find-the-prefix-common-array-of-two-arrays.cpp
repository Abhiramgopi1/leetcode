class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            unordered_map<int,int>mp;
            for(int j=0;j<=i;j++){
                mp[B[j]]++;
            }
            int c=0;
            for(int k=0;k<=i;k++){
                if(mp[A[k]]!=0) c++; 
            }

            ans.push_back(c);
        }

        return ans;
    }
};