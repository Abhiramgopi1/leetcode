class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int c=0;
        int n=customers.size();
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) c+=customers[i];
        }
        int m=c;
        for(int i=0;i<n;i++){
            int sum=0;
            if(grumpy[i] == 1)
            {
                int a = minutes;
                for(int j=i;j<n and a--;j++){
                    if(grumpy[j]==1) {
                        sum+=customers[j];
                    }
                    m = max(c+sum , m);
                }
            }
        }

        return m;
    }
};