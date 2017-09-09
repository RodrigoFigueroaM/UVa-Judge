class Solution(object):
    def singleNonDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s = sum(set(nums))
        d = sum(nums)
        return s * 2 - d


if __name__ == '__main__':
	sol = Solution()
	print(sol.singleNonDuplicate([1,1,2,3,3,4,4,8,8]))
	print(sol.singleNonDuplicate([3,3,7,7,10,11,11]))