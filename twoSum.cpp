// g++ -std=c++14

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector <int> twoSum(std::vector <int>& nums, int target) 
    {
    	std::vector<int> v;

        for (std::vector<int>::iterator element = nums.begin(); element != nums.end() ; element++)
        {
            auto lookfor = target - *element;
            auto itSecond = std::find (element + 1, nums.end(), lookfor );
            if ( *itSecond == lookfor)
            {
                v.push_back( std::distance( nums.begin(), element) );
                v.push_back( std::distance( nums.begin(), itSecond) );
                return v;
            }
        }
        return v;
    }
};


int main(int argc, char const *argv[])
{
	Solution s;
	std::vector <int> v {2, 7, 11, 15};
	std::vector <int> result = s.twoSum(v, 9); //0 ,1
    for (auto element : result)
        std::cout << element << ' '; 
    std::cout << std::endl;

    std::vector <int> v1 {3, 2, 4};
    result = s.twoSum(v1, 6);
    for (auto element : result)
        std::cout << element << ' '; // 1,2
    std::cout << std::endl;

    std::vector <int> v2 {3, 3};
    result = s.twoSum(v2, 6);
    for (auto element : result)
        std::cout << element << ' '; // 0,1
    std::cout << std::endl;

	std::vector<int> v3 {217,231,523,52,547,243,648,509,415,149,689,710,265,187,370,56,977,182,400,329,471,805,955,989,255,766,38,566,79,843,295,229,988,108,781,619,704,542,335,307,359,907,727,959,161,699,123,650,147,459,657,188,304,268,405,685,620,721,351,570,899,60,388,771,24,659,425,440,508,373,32,645,409,272,356,175,533,740,370,152,34,510,745,251,227,494,258,527,817,773,178,194,860,387,627,851,449,736,15,212,529,950,316,28,65,484,968,63,4,643,795,669,203,677,139,636,289,555,430,849,150,493,301,377,240,873,965,441,230,349,447,470};
    result = s.twoSum(v3, 718);
    for (auto element : result)
        std::cout << element << ' '; // 27,79
    std::cout << std::endl;
	
    std::cout << v3.size() << std::endl;
    
    return 0;
}