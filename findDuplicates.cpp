// g++ -std=c++11

#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    std::vector<int> findDuplicatesOld(std::vector<int>& nums) 
    {
        std::vector<int> solution;
        if(nums.size() <= 1)
            return solution;

        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == nums[i + 1])
                solution.push_back(nums[i]);
        }
        return solution;
    }
    
    std::vector<int> findDuplicates(std::vector<int>& nums) 
    {
        std::vector<int> solution;

        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == nums[i + 1])
                solution.push_back(nums[i]);
        }
        return solution;
    }
 
};


int main(int argc, char const *argv[])
{
	Solution s;
	std::vector<int> v {4,3,2,7,8,2,3,1};
	auto result = s.findDuplicates(v); //[2,3]
    for (auto element : result)
    {
        std::cout << element ;
    }
	
    std::cout << std::endl;

	// std::vector<int> v1 {1,2,3,3};
	// result = s.containsDuplicate(v1); //true
	// std::cout << result << std::endl;
	// std::vector<int> v2 {};
	// result = s.containsDuplicate(v2); //false
	// std::cout << result << std::endl;
	// std::vector<int> v3 {0};
	// result = s.containsDuplicate(v3); //false
	// std::cout << result << std::endl;
	return 0;
}