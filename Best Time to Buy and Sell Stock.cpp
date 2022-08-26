class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_element=INT_MAX;
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            min_element = min(min_element,prices[i]);
            profit=max(profit,prices[i]-min_element);
            
        }
        return profit;
        /*********brute force*********/
//         int maxpro=0;
//         int profit;
//        for(int i=0;i<prices.size();i++){
//            for(int j=i+1;j<prices.size();j++){
//                if(prices[i]<prices[j]){
//                    maxpro=max(prices[j]-prices[i],maxpro);
                 
//                }
             
//            }
           
//        }
//         return maxpro;
    }
};