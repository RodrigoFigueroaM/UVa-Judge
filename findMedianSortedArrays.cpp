// g++ -std=c++14

#include <iostream>
#include <vector>


class Solution {
public:
	double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2)
    {
		double median1, median2;
        if(nums1.size() % 2 == 0)
			median1 = (nums1[nums1.size() / 2] + nums1[nums1.size() / 2 + 1]) / 2;
		return median1;
    }
};

int main(int argc, char const *argv[])
{
	Solution s;
	std::vector<int> nums1 {1,3};
	std::vector<int> nums2 {2};
	double ans = s.findMedianSortedArrays(nums1, nums2);
	
	std::cout << ans << std::endl;

	return 0;
}