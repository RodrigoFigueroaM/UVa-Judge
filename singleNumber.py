class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        singles = []
        nums_dict = dict([ (str(num),0) for num in nums ])
        for num in nums:
        	nums_dict[str(num)] += 1

        for num in nums:
        	if nums_dict[str(num)] == 1:
        		singles.append(num)
        return singles

def main():
	s = Solution()
	print(s.singleNumber([1, 2, 1, 3, 2, 5]))
if __name__ == '__main__':
	main()