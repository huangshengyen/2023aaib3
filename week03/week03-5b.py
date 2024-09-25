#week03-5b.py
#leetcode 459. Repeated Substring Pattern
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2 = s + s #把字串 s + s變兩倍長度
        s2 = s2[1:len(s2)-1] #左少1，右少1
        if s in s2: return True
        else: return False
