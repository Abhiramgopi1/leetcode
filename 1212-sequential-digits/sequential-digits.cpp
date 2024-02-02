class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string l= to_string(low);
        string h=to_string(high);
        int a=l.length();
        int b=h.length();
        for(int i=a ;i<=b;i++){
            for(int j=1;j<=10-i;j++){
                a = i;
                int t = j;
                int x=0;
                while(a--){
                    x = x*10 + t;
                    t++;
                }
                if(low<= x and high>=x)
                ans.push_back(x);
            }
        }
        return ans;
    }
};