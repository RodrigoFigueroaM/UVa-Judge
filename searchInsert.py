class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        try:
        	return nums.index(target)
        except Exception as e:
        	if len(nums) > 1:
	        	for i in range(0, len(nums) - 1):
	        		# print(nums[i], target , nums[i + 1], nums[i] < target < nums[i + 1])
	        		if nums[i] < target < nums[i + 1]:
	        			return i + 1
	        if target > nums[-1]:
	        	return len(nums)
	        elif target < nums[0]:
	        	return 0
	        	

if __name__ == '__main__':
	s = Solution()
	print(s.searchInsert([1,3,5,6], 5)) #2
	print(s.searchInsert([1,3,5,6], 2)) #1
	print(s.searchInsert([1,3,5,6], 7)) #4
	print(s.searchInsert([1,3,5,6], 0)) #0
	print(s.searchInsert([1], 0))	#0
	print(s.searchInsert([1,3], 2))	# 1