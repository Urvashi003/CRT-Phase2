//o(n2)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int n = prices.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int profit = prices[j]- prices[i];
                ans = max(ans,profit);
            }
        }
        return ans;
    }
};

//o(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int n = prices.size();
        int mini = prices[0];
        for(int i=1; i<n; i++){
           int profit = prices[i]- mini; //sell
           ans = max(ans, profit);
           mini = min(mini, prices[i]);//buy
        }
        return ans;
    }
};