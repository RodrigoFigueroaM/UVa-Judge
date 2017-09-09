class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        a = set(nums)
        n = len(nums)
        estimSum = (n*(n + 1)) / 2
        estimadedSum = sum(a)
        sumlist = sum(nums)
        duplicate = sumlist - estimadedSum
        missingNumber = estimSum - estimadedSum
        return [duplicate, missingNumber]

        
if __name__ == '__main__':
	sol = Solution()
	print(sol.findErrorNums([1,2,2,4]))