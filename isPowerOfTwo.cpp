// g++ -std=c++11

#include <iostream>
#include <cmath>
#include <type_traits>

bool isPowerOfTwo(int n)
{
	if (n == 0 )
		return false;
	int x = std::log2(n);
	bool isIt = pow(2,x) == n?  true : false;
	return isIt;
	// std::cout<< pow (2,x)<<std::endl;
	// if (pow (2,x) == n)
	// 	return true;
	// return false;
}
int main(int argc, char const *argv[])
{
	bool x = isPowerOfTwo(2);
	std::cout << x << std::endl; // 1

	x = isPowerOfTwo(3);
	std::cout << x << std::endl; // 0

	x = isPowerOfTwo(0);
	std::cout << x << std::endl; // 0
	return 0;
}