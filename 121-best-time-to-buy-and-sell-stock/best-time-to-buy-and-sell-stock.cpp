// Initialize minPrice with first element and maxProfit = 0.
// Traverse array from second element to end.
// For each element, calculate profit = current price − minPrice.
// Update maxProfit if this profit is greater.
// Update minPrice if current price is smaller than previous minimum.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy=prices[0];
        int maxprofit=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            maxprofit=max(maxprofit,prices[i]-minbuy);
            minbuy=min(minbuy,prices[i]);
        }
        return maxprofit;
    }
};