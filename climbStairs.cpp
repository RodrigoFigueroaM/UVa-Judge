#include <iostream>
class Solution {
public:
    int climbStairs(int n) 
    {
    	int factorial = 1;
    	float ways = 0.5;
     	for (int i = 1; i < n; ++i)
     	{
     		factorial *= i;
     	}
     	return ways * factorial;
    }
};

int main(int argc, char const *argv[])
{
	Solution sol;

	std::cout<<sol.climbStairs(3)<<std::endl;
	return 0;
}