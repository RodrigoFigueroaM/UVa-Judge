class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        for i in range(0, len(nums)):
        	if nums[i] == 0:
        		for j in range(i, len(nums)):
        			if nums[j] != 0:
        				nums[i] = nums[j]
        				nums[-1] = 0
        				break
        				

if __name__ == '__main__':
	sol = Solution()
	nums = [0, 1, 0, 3, 12]
	sol.moveZeroes(nums)
	print(nums)