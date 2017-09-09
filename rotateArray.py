class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        k=k-1
        newList = []
        
     	# if k == 0:
        	# nums = nums
        # else:
        for x in range(k + 1,len(nums)):
            newList.append(nums[x])
        for x in range(0,k + 1):
            newList.append(nums[x])
        nums[:] = newList       
  
        	
    	    
        
if __name__ == '__main__':
	sol = Solution()
	x = [1,2,3,4,5,6,7]
	# print(x)
	sol.rotate(x,3) #[5,6,7,1,2,3,4].
	print(x)
	# p = [1]
	# sol.rotate(p, 1)
	# print(p)
	r = [1,2]
	sol.rotate(r,1)
	print (r)

	# n = [-1]
	# sol.rotate(n,2)
	# print n