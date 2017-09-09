#include <iostream>
#include <algorithm>
class Solution {
public:
    std::string reverseString(std::string s) 
    {
    	std::reverse(s.begin(), s.end());
     return s;   
    }
};

int main(int argc, char const *argv[])
{	

	Solution sol;
	std::string s = "hello";
	sol.reverseString(s);

	return 0;
}