class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=0;
        int i=0,j=0;
        while(j<prices.size()){
            if(prices[i]>prices[j]){
                i=j;
            }
            else if(prices[i]<prices[j]){
                a=max(prices[j]-prices[i],a);
            }
            j++;
        }
        return a;

    }
};