class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        vector<int>ans;
        int s=customers[0][0]+customers[0][1];
        ans.push_back(customers[0][1]);
        int s1=0;
        cout<<s<<" ";
        for(int i=1;i<customers.size();i++){
            if(s>=customers[i][0]){
                s1=s+customers[i][1];
                s=s1;
                ans.push_back(s-customers[i][0]);
            }
            else if(s<customers[i][0]){
                s1=customers[i][0]+customers[i][1];
                s=s1;
                ans.push_back(customers[i][1]);
            }
            // cout<<s<<" ";
        }
        double s2=0;
        int a=ans.size();
        for(auto i: ans){
            s2+=i;
        }
        s2=s2/a;
        return s2;

    }
};