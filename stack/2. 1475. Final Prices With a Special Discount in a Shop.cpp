class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans(n);
        
        for(int i=0;i<prices.size();i++){
            int j=i+1;
            while(j<prices.size() && prices[j]>prices[i]) j++;
            
            if(j==prices.size()){
                ans[i]=prices[i];
            }else{
                ans[i]=prices[i]-prices[j];
            }
        }
        
        return ans;
        
    }
};
