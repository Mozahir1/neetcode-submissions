class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        elif len(str(x)) == 0 or len(str(x)) == 1:
            return True
        elif(str(x)) == str(x)[::-1]:
            return True
        else:
            return False