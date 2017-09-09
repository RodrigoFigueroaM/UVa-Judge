// g++ -std=c++14

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    char findTheDifference(std::string s, std::string t)
    {
        int sumS = 0;
        int sumT = 0;
        for (auto ch : s)
        {
            sumS += int(ch);
        } 
        for (auto ch : t)
        {
            sumT += int(ch);
        }
        return char(sumT - sumS);
    }
};


int main(int argc, char const *argv[])
{
	Solution s;
    std::cout << s.findTheDifference("abcd","abcde") << std::endl;
    std::cout << s.findTheDifference("a", "aa") << std::endl;
    return 0;
}