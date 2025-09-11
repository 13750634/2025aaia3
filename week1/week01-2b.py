#week01-2b.py 版本2
#leetcode 28. Find the Index of the First Occurrence in a String
#在haystack 乾稻草堆 裡找到 needle 針 (對海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
