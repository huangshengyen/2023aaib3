#week03-4a.py
#leetcod 28. Find the Index of the First Occurrence in a String
#學習計畫第四題 easy ，在一堆草堆裡，找到一根針
#在 Python 只要一行 a.find(b)，在字串a 裡找到 字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)
