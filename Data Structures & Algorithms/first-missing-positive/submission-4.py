class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        smallest = 1
        nums.sort()
        for i in nums:
            if i > 0 and smallest == i:
                smallest += 1
    
        return smallest
                
        
        