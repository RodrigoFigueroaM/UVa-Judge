class Solution(object):
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        if r * c != len(nums) * len(nums[0]):
        	return nums
        temp = [0 for i in range(0,c)]
        reshaped = [ temp[:] for i in range(0,r)]
        k = 0
        l = 0
        for i in range(0, len(nums)):
        	for j in range(0, len(nums[i])):
        		reshaped[k][l] = nums[i][j]
        		l += 1 
        		if l == c:
	        		k += 1 
	        		l = 0
        return reshaped

if __name__ == '__main__':
	sol = Solution()
	print(sol.matrixReshape( [[1,2,3,4]], 4, 1))