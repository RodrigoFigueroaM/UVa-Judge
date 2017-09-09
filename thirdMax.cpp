// g++ -std=c++14

#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) 
    {
    	std::set<int> set;
    	for(auto element : nums)
    	{
    		set.insert(element);
    	}

    	if (set.size() >= 3)
    	{
    		auto it = set.end();
    		it--;
    		it--;
    		it--;
    		return *it;
    	}
        return *set.rbegin();
    }
};



int main(int argc, char const *argv[])
{
	Solution s;
	std::vector<int> v {3,2,1};
	int ans = s.thirdMax(v);
	std::cout << ans << std::endl; //1

	std::vector<int> v1 {2,1};
	ans = s.thirdMax(v1);
	std::cout << ans << std::endl; //2

	std::vector<int> v2 {2, 2, 3, 1};
	ans = s.thirdMax(v2);
	std::cout << ans << std::endl;//1

	return 0;
}