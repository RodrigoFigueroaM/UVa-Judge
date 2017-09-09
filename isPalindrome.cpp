// g++ -std=c++11

#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) 
    {
        for( int i = 0, j = s.size() - 1 ; i < j; i++, j-- )
        {

            while ( not std::isalnum(s[i])  and i < j)
            {
            	i++;
            }
            while ( !std::isalnum(s[j]) and i < j)
            {
            	j--;
            }
            if( std::tolower(s[i]) != std::tolower(s[j]))
            {
            	return false;
            }
        }
    return true;
    }
};



int main(int argc, char const *argv[])
{
	Solution s;
	std::string test = "A man, a plan, a canal: Panama";
	bool ans = s.isPalindrome(test);
	std::cout << ans << std::endl; //true

	test = "race a car";
	ans = s.isPalindrome(test);
	std::cout << ans << std::endl;//false

	test = "0P";
	ans = s.isPalindrome(test);
	std::cout << ans << std::endl; //false

	test = ".,";
	ans = s.isPalindrome(test);
	std::cout << ans << std::endl; //true


	return 0;
}