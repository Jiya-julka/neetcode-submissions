class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int p=prices[i]-min;
           
            if(p>profit){
                profit=p;
            }

        }return profit;
    }
};
