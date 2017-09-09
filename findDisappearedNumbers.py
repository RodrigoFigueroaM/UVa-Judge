class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l = [i for i in range (1, len(nums) + 1)]
        s = set(l)
        returnList = []
        for num in s:
        	if num not in nums:
        		returnList.append(num)
        return returnList

    def findDisappearedNumbers2(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # if nums:
        l = [i for i in range (1, len(nums) + 1)]
        s = set(l)
        numsSet = set(nums)
        return list(s - numsSet)
        return nums



if __name__ == '__main__':
	sol = Solution()
	print(sol.findDisappearedNumbers2([4,3,2,7,8,2,3,1]))
	print(sol.findDisappearedNumbers2([]))