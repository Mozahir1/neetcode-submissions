class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // set up hash with a number and index
        for (int i = 0; i < nums.size(); i++){ // iterate through array
        int complement = target - nums[i]; // find the complement of the index
        if (m.count(complement)){ 
            return {m[complement], i};} // if complement exists return the index of it
        
        m[nums[i]] = i; // if the complement doesn't exist yet store the current index & number
    }
    return {}; // if no solution was found return empty
    }
};
