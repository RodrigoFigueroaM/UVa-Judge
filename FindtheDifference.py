#!/usr/bin/env python


class Solution:
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        sumS = 0
        sumT = 0
        for char in s:
            sumS+= int(ord(char))
        for char in t:
            sumT += int(ord(char))
        return chr(sumT - sumS)

if __name__ == '__main__':
    sol = Solution()
    print(sol.findTheDifference("abcd","abcde"))
    print(sol.findTheDifference("a","aa"))