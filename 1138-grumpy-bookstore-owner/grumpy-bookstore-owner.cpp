class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int c=0;
        int n=customers.size();
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) {
                c+=customers[i];
                customers[i]=0;
            }
        }
        int s=0,i=0;
        while(i<minutes){
            s+=customers[i];
            i++;
        }
        int m=s;
        while(i<n){
            s-=customers[i-minutes];
            s+=customers[i];
            i++;
            m=max(m,s);
        }

        return m+c;




        return m;
    }
};