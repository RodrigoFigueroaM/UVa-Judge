#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <set>


class Solution {
public:

    std::vector<int> topKFrequent(std::vector<int>& nums, int k) 
    {
        std::map<std::string, int> dict;
        std::vector<int> topFrequent;

        int max_value = 0;
        for(auto& p: nums)
        	dict.insert({std::to_string(p), 0});

        for(auto& p: nums)
        {
        	dict[std::to_string(p)] += 1;
        	max_value = std::max(max_value, dict[std::to_string(p)]);
        }

        while(max_value > 0 and topFrequent.size() < k)
        {
	        for(auto& p: dict)
        		if(p.second == max_value)
        			topFrequent.push_back(std::stoi(p.first));
        	max_value--;
        }


        return topFrequent;
    }
};

int main(int argc, char const *argv[])
{
	Solution s;
	std::vector<int> v{1,1,1,2,2,3};
	
	std::vector<int> resutl = s.topKFrequent(v, 2);
	std::for_each(resutl.begin(),
				  resutl.end(),
				  [](auto val)->void
				  {std::cout << val << std::endl;}
		);
	return 0;
}