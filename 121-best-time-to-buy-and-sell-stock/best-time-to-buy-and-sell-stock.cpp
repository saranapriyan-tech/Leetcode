#include <algorithm>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest_price = prices[0];
        int profit = 0;
        
        for(int i=0;i<size(prices); i++){
            if (prices[i] < lowest_price){
                lowest_price = prices[i];
                
            }
            if((prices[i]-lowest_price) > profit) {
                profit = prices[i] - lowest_price;
            }
        }
        return profit;
    }
};