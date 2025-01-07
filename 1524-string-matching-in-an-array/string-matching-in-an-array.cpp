class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        set<string>st;
        int n=words.size();
        for(int i=0;i<n;i++){
            string s=words[i];
            int m=s.size();
            for(int j=0;j<n;j++){
                string s1=words[j];
                int k=s1.size();
                int u=0;
                if(m<k){
                    for(int l=0;l<k;l++){
                        if(s1.find(s)<k){
                            st.insert(s);
                            break;
                        }
                    }
                }
            }
        }

        for(auto i : st){
            ans.push_back(i);
        }
        return ans;
    }
};