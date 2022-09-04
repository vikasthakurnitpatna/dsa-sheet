class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0 || prices.size()==1) return 0;
        int mini=prices[0];
        int ans=INT_MIN;
        for(int i=1;i<prices.size();i++){
            if(mini>prices[i]){
                mini=prices[i];
            }
            else{
                int diff=prices[i]-mini;
                ans=max(diff,ans);
            }
        }
        if(ans<0) return 0;
        return ans;
    }
};