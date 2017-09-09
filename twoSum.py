class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        result = []
        i = 0
        for num in nums:
        	lookfor = target - num
        	if lookfor in nums[i+1 :: ]:
        		result.append(i)
        		result.append(nums[i+1 :: ].index(lookfor) + (i + 1) )
        		return result
        	i += 1
        return result


        # for (std::vector<int>::iterator element = nums.begin(); element != nums.end() ; element++)
        # {
        #     auto lookfor = target - *element;
        #     auto itSecond = std::find (element + 1, nums.end(), lookfor );
        #     if ( *itSecond == lookfor)
        #     {
        #         v.push_back( std::distance( nums.begin(), element) );
        #         v.push_back( std::distance( nums.begin(), itSecond) );
        #         break;
        #     }
        # }
        
if __name__ == '__main__':
	s = Solution()
	print(s.twoSum( [2, 7, 11, 15], 9 ) )  #0 ,1
	print(s.twoSum( [3, 2, 4], 6) )#1,2
	print(s.twoSum( [3, 3], 6) ) #0,1
	print(s.twoSum( [217,231,523,52,547,243,648,509,415,149,689,710,265,187,370,56,977,182,400,329,471,805,955,989,255,766,38,566,79,843,295,229,988,108,781,619,704,542,335,307,359,907,727,959,161,699,123,650,147,459,657,188,304,268,405,685,620,721,351,570,899,60,388,771,24,659,425,440,508,373,32,645,409,272,356,175,533,740,370,152,34,510,745,251,227,494,258,527,817,773,178,194,860,387,627,851,449,736,15,212,529,950,316,28,65,484,968,63,4,643,795,669,203,677,139,636,289,555,430,849,150,493,301,377,240,873,965,441,230,349,447,470], 
					718)) # 27,79