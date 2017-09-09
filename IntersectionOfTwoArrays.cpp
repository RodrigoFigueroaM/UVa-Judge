#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

// using namespace std;
class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) 
    {
        std::set<int> nums1IntersectionNums2;
        std::vector<int> intersection;
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        std::set_intersection(nums1.begin(), nums1.end(),
        					  nums2.begin(), nums2.end(),
        					  std::inserter(nums1IntersectionNums2 ,nums1IntersectionNums2.begin()));

        std::for_each(nums1IntersectionNums2.begin(),
        	nums1IntersectionNums2.end(),
        	[&intersection](const auto &val)->void
        	{
        		intersection.push_back(val);
        	});

        return intersection;
    }
};


int main(int argc, char const *argv[])
{
	Solution s;
	std::vector<int> nums1{2, 1};
	std::vector<int> nums2{1, 1};

	std::vector<int>  solution = s.intersection(nums1, nums2);

	std::for_each(solution.begin(), 
				 solution.end(),
				 [](auto &val)->void
				 {std::cout << val <<std::endl;});
	return 0;
}