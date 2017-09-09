import math

class Solution(object):
    def judgeSquareSum(self, c):
        """
        :type c: int
        :rtype: bool
        """
        # a = int( math.sqrt(c))
        # if a ** a == c:
        # 	return True
        b = 0
        b2 = b * b
        sqrtC = math.sqrt(c)
        while b2 <= c :
        	a = int( math.sqrt(c - b2))
        	if a * a + b2 == c :
        		return True
        	b += 1
        	b2 = b * b        
        return False

if __name__ == '__main__':
	sol = Solution()
	for x in range(1,11):
		print( x, sol.judgeSquareSum(x))
	print(sol.judgeSquareSum(3))
	# for x in range(1,10):
		# print(x, x**2)
