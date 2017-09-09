// g++ -std=c++14

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  public:
    int removeDuplicates(std::vector<int>& nums) 
    {
        int stop = nums.size();
        if (stop < 1)
            return stop;

        int flag = 0;
        int lastModified = 1;
        for (int current = 0; current < stop; ++current)
        {   
            if(nums[current] == nums[current + 1])
            {
                nums[lastModified] = nums[current];
                lastModified = current + 1;
            }
        }
        return lastModified;
    }
};


int main(int argc, char const *argv[])
{
	Solution s;
    std::vector<int> v {1, 1, 2}; //1,2
    std::cout << "First" <<std::endl;
    int x = s.removeDuplicates(v);
    std::cout << "one " << x << std::endl;
    for (int i = 0; i < x; ++i)
    {
        std::cout << v[i] <<std::endl;
    }
   
    std::vector<int> v1 {1, 3, 3, 6, 6, 7}; //1,3,5,6,7 
    x = s.removeDuplicates(v1);
    std::cout << "two " << x <<std::endl;
    for (int i = 0; i < x; ++i)
    {
        std::cout << v1[i] <<std::endl;
    }


    std::vector<int> v2  {1,2}; 
    x = s.removeDuplicates(v2);
    std::cout <<"three" << x << std::endl;
     for (int i = 0; i < x; ++i)
    {
        std::cout << v2[i] <<std::endl;
    }
    return 0;
}