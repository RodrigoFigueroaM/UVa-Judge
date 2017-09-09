 // g++ -std=c++14
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    int arrayPairSum(std::vector<int> nums) 
    {
    	std::sort(nums.begin(), nums.end());
    	int sum = 0;
    	for(int i = 0; i < nums.size(); i+= 2)
    	{
    		int a = nums[i];
    		int	b = nums[i + 1];
    		sum += std::min(a,b);
    	}
    	return sum;
    }
};


int main()
{
	std::vector<int> v {1,4,3,2};
	Solution sol;
	sol.arrayPairSum(v);
}