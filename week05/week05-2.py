# week05-2.py leetcode 709. To Lower Case
class Solution:
    def toLowerCase(self, s: str) -> str:
        ans = ''
        for c in s:
            ans += c.lower()
        return ans