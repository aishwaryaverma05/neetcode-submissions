class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int profit=0;
        for(int num:prices){
            buy=min(buy,num);
            profit=max(profit,num-buy);
        }
        return profit;
    }
};
