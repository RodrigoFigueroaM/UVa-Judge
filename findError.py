class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        estimadedSum = (n *(n + 1))/2
        print(estimadedSum)
        
if __name__ == '__main__':
	sol = Solution()
	print(sol.findErrorNums([1,2,2,4]))