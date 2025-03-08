
class Solution {
public:
    int prime(int n){
        if(n<2) return 0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    vector<int> closestPrimes(int left, int right) {
         vector<int>v;
         for(int i=left ;i<=right;i++){
            if(prime(i)==1) v.push_back(i);
         }
         
         if(v.size() <= 1) return {-1,-1};

         int k=v[0],l=v[1],m=abs(v[1]-v[0]);
         for(int i=1;i<v.size();i++){
            if(abs(v[i]-v[i-1]) < m){
                k=v[i-1];
                l=v[i];
                m=abs(v[i]-v[i-1]);
            }
         }

         return {k,l};
    }
};