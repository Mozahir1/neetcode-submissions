class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int middle = left + ((right - left) / 2); // the value of left will change as the function iterates
            if(nums[middle] > target) {
                right = middle - 1; // if the middle number is greater than the target discard right half of arry
            }
            else if (nums[middle] < target) {
                left = middle + 1; // if middle number less than target discard left half of arry
            }
            else { 
                return middle; // target equals middle
             }
        }
        return -1; // if nothing else gets returned, no value was found, return -1 to represent that
    }
};
