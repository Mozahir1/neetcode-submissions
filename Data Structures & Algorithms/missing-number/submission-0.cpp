class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int solution = nums.size();
        for(int i = 0; i < nums.size(); i++)
            solution += i - nums[i];
    
    return solution;}
};
