// g++ -std=c++11

#include <iostream>
#include <vector>
#include <string>
#include <math.h>

class Solution {
public:
    int mySqrt(int x)
    {
        int result =  pow (x, 0.5);
        return result;
    }
};



int main(int argc, char const *argv[])
{
	Solution s;
	int ans = s.mySqrt(9);
	std::cout << ans << std::endl; //3

	ans = s.mySqrt(16);
	std::cout << ans << std::endl;//4

	return 0;
}