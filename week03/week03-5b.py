#week03-5b.py
#leetcode 459. Repeated Substring Pattern
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2 = s + s #��r�� s + s�ܨ⭿����
        s2 = s2[1:len(s2)-1] #����1�A�k��1
        if s in s2: return True
        else: return False
