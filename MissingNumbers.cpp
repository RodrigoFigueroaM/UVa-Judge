// g++ -std=c++11

#include <iostream>
#include <vector>

int missingNumber(std::vector<int>& nums) 
{
	int n = nums.size();
	int sum = 0;
	for( auto it : nums)
		sum += it;
 	return ((n * ( n + 1) ) / 2) - sum;
}

int main(int argc, char const *argv[])
{
	std::vector<int> v = {0,1,3};
	int x = missingNumber(v);
	std::cout << x << std::endl; // 2

	std::vector<int> v1 = {0};
	x = missingNumber(v1);
	std::cout << x << std::endl;
	return 0;
}