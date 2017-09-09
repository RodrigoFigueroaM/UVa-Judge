class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if 0 <= num <= 9:
        	return num
        t =0
        while num != 0:
        	t += num %10
        	num = num//10
        return self.addDigits(t)
            
        
if __name__ == '__main__':
	sol = Solution()
	print(sol.addDigits(0))
