class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        z = str(x)

        return (z[::-1]) == str(x)