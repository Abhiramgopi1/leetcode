class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int c=numBottles;
        int r=0,q=0;
        while(numBottles>=numExchange){

            r=numBottles%numExchange;
            q=numBottles/numExchange;
            c+=q;
            numBottles=r+q;
        }
        return c;
    }
};