class Solution {
    public int maxProfit(int[] prices) {
          int profit =0;
        int min = prices[0];
        int maxprofit = 0;
        
        // for (int i=0; i<prices.length; i++){
        //     int leng = prices.length-1;
        //     while (leng > i){
        //         if (prices[leng] >= prices[i]){
        //             temp = prices[leng] - prices[i];
        //             profit = Math.max(profit, temp);
        //         }
        //         leng--;
        //     }
        // }
        // return profit;
        for (int i=1; i<prices.length; i++){ 
            min = Math.min(min, prices[i]);
            profit = prices[i] - min;
            maxprofit = Math.max(profit, maxprofit);
        }
        return maxprofit;
        
        
    }
}
