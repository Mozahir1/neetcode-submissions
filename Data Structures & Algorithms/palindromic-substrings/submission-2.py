class Solution:
    def countSubstrings(self, s: str) -> int:
        def count_from_center(left, right):
            """Expand outward while the ends match; each expansion is one palindrome."""
            total = 0
            while left >= 0 and right < len(s) and s[left] == s[right]:
                total += 1
                left -= 1
                right += 1
            return total

        total = 0
        for i in range(len(s)):
            total += count_from_center(i, i)       # odd length, e.g. "aba"
            total += count_from_center(i, i + 1)   # even length, e.g. "abba"
        return total