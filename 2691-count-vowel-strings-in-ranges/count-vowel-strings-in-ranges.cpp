class Solution {
public:
    int vowel(string i){
        int n=i.size();
        if(n==1) {
            if(i[0]=='a' or i[0]=='e' or i[0]=='i' or i[0]=='o' or i[0]=='u' ) return 1;
        }
        if((i[0]=='a' or i[0]=='e' or i[0]=='i' or i[0]=='o' or i[0]=='u') and (i[n-1]=='a' or i[n-1]=='e' or i[n-1]=='i' or i[n-1]=='o' or i[n-1]=='u' )) {
            return 1;
        }
        return 0;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>pre;
        vector<int>ans;
        int c=0;
        for(int i=0;i<words.size();i++){
            if(vowel(words[i])==1) c++;
            pre.push_back(c);
        }

        for(int i=0;i<queries.size();i++){
            int a=queries[i][0];
            int b=queries[i][1];
            int k=pre[b];
            if(a>0){
                k-=pre[a-1];
            }
            ans.push_back(k);
        }

        return ans;
        
    }
};