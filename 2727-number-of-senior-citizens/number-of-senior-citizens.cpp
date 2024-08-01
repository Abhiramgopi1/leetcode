class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(auto it: details){
            string d="";
            d+=it[11];
            d+=it[12];
            int k=stoi(d);
            if(k>60) c++;
        }
        return c;
    }
};