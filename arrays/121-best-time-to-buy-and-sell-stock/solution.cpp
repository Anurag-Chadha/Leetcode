class Solution {
public:
int maxProfit(vector<int>& prices) {
    int minVal=prices[0];
    int profit=0;
    for(int i=1;i<prices.size();i++){
        int cost = prices[i]-minVal;
        profit= max(cost,profit);
        minVal=min(minVal,prices[i]);
        
    }
    return profit;
}
};
