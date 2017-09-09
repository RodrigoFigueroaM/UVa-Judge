import operator
class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        dictionary = {str(num):0 for num in nums}
        top_k_Frequent = []
        for num in nums:
        	dictionary[str(num)] += 1

        sorted_dict = sorted(dictionary.items(), key = operator.itemgetter(1), reverse=True)
        
        for i in range (k):
        	top_k_Frequent.append(int(sorted_dict[i][0]))
        	
        return top_k_Frequent

if __name__ == '__main__':
	s = Solution()
	print(s.topKFrequent([1,1,1,2,2,3] , 2))