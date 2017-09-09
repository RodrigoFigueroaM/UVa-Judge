#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <set>

// auto sum = [](int x, int y) -> int { return x + y; };
template <typename E>
void printIter(const std::vector<E> & iter)
{
	std::for_each(iter.begin(),
				  iter.end(),
				  [](auto val)->void
				  {std::cout << val << std::endl;}
		);
}

class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) 
    {
    	std::vector<int> tmpNums(nums.size(),1);
    	// printIter(tmpNums);
    	for(int i = 0; i < nums.size(); i++)
    	{
			tmpNums[]
    	}
    	
        
    }
};

// 1*2*3*4 - 4*3

int main(int argc, char const *argv[])
{
	Solution s;
	std::vector<int> v{1,1,1,2,2,3};
	std::vector<int> resutl = s.productExceptSelf(v);
	// printIter(v);
	return 0;
}