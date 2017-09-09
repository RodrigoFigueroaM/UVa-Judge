class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        fizzBuzzList = []
        for i in range(1, n + 1):
        	if i % 15 == 0:
        		fizzBuzzList.append('FizzBuzz')
        	elif i % 3 == 0: 
        		fizzBuzzList.append('Fizz')
        	elif i % 5 == 0:
        		fizzBuzzList.append('Buzz')
        	else:
        		fizzBuzzList.append(str(i))
        return fizzBuzzList
        
if __name__ == '__main__':
	sol = Solution()
	print(sol.fizzBuzz(15))