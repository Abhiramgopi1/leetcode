class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int c=0;
        int n=customers.size();
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) c+=customers[i];
        }
        int m=0;
        for(int i=0;i<n-minutes+1;i++){
            int sum=0;
            int k=i;
            for(int j=0;j<minutes;j++){
                if(grumpy[k]==1) {
                    sum+=customers[k];
                    m=max(sum,m);
                }
                k++;
            }
        }

        return c+m;
    }
};