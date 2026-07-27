class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minP = 101, maxP = 0;
    for (int p : prices) {
        minP = min(minP, p);
        maxP = max(maxP, p - minP);
    }
    return maxP;
    
    }
};
