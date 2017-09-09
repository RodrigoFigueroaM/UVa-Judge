// g++ -std=c++11

#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    bool containsDuplicateOld(std::vector<int>& nums)
    {
    	std::set<int> set; 
    	for (auto element : nums)
    	{
    		auto search = set.find(element);
    		if (search != set.end())
    			return true;
    		set.insert(element);

    	}
        return false;
    }

     bool containsDuplicate(std::vector<int>& nums)
    {
    	if(nums.size() <= 1)
    		return false;

    	std::sort(nums.begin(), nums.end());
    	for (int i = 0; i < nums.size(); ++i)
    	{
    		if (nums[i] == nums[i + 1])
    			return true;
    	}
    	return false;
    	
    }

    bool containsDuplicateStr(std::vector<char>& nums)
    {
    	if(nums.size() <= 1)
    		return false;

    	std::sort(nums.begin(), nums.end());
    	for (int i = 0; i < nums.size(); ++i)
    	{
    		if (nums[i] == nums[i + 1])
    			return true;
    	}
    	return false;
    	
    }
};


int main(int argc, char const *argv[])
{
	Solution s;
	std::vector<int> v {1,2,3};
	auto result = s.containsDuplicate(v); //false
	std::cout << result << std::endl;

	std::vector<int> v1 {1,2,3,3};
	result = s.containsDuplicate(v1); //true
	std::cout << result << std::endl;
	std::vector<int> v2 {};
	result = s.containsDuplicate(v2); //false
	std::cout << result << std::endl;
	std::vector<int> v3 {0};
	result = s.containsDuplicate(v3); //false
	std::cout << result << std::endl;

	std::vector<char> v4 {'h','e','l','l','o'};
	auto result = s.containsDuplicateStr(v4); //false
	std::cout << result << std::endl;

	std::vector<char> v5 {'h','e','l','o'};
	result = s.containsDuplicateStr(v5); //false
	std::cout << result << std::endl;

	return 0;
}