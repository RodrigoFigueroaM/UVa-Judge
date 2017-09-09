class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        dic = {}
        for char in s:
            if char in dic:
                dic[char] =  dic[char] + 1       
            else:
                dic[char] = 1
        sortedDic = sorted(dic, key=lambda x: dic[x], reverse=True)
        sortedString = ''
        for key in sortedDic:
            value = dic[key]
            while value > 0:
                sortedString += str(key)
                value -= 1
        return sortedString
        
if __name__ == '__main__':
	sol = Solution()
	print(sol.frequencySort("tree"))