#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <cctype>
#include <iterator>
auto compare =  [](char lhs, char rhs) -> bool
    				{	
    					std::cout<<"in"<<lhs <<" "<< rhs << (lhs == rhs) <<'\n';
    					return lhs == rhs;
    				};
class Solution {
public:
	
	std::vector<std::string> findWords(std::vector<std::string>& words) 
    {
        std::set<char> rowOne {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        std::set<char> rowTwo {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    	std::set<char> rowThree {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    	
    	std::vector<std::string> canBeTyped;
    	for(auto word: words)
    	{
    		std::vector<char> v_intersectionOne;
    		std::vector<char> v_intersectionTwo;
    		std::vector<char> v_intersectionThree;
    		//create set with given string and change to lowe str to lower
    		std::set<char> wordSet;
    		std::for_each(word.begin(), word.end(), [&wordSet](char c) ->void{wordSet.insert(std::tolower(c));});
    		
    		//make intersection
    		std::set_intersection(wordSet.begin(), wordSet.end(),
	                  			rowOne.begin(), rowOne.end(),
	              std::back_inserter(v_intersectionOne));

    		std::set_intersection(wordSet.begin(), wordSet.end(),
	                  			rowTwo.begin(), rowTwo.end(),
	              std::back_inserter(v_intersectionTwo));

    		std::set_intersection(wordSet.begin(), wordSet.end(),
	                  			rowThree.begin(), rowThree.end(),
	              std::back_inserter(v_intersectionThree));

     		//check size of set if they are eaul a qord can be typed in the same row
    		if(v_intersectionOne.size() == wordSet.size() or
    		   v_intersectionTwo.size()  == wordSet.size() or 
    		   v_intersectionThree.size()  == wordSet.size())
    			canBeTyped.push_back(word);
    	}
    	return canBeTyped;
    }
};

int main(int argc, char const *argv[])
{

	Solution sol;
	// std::vector<std::string> v {"Hello"};
	std::vector<std::string> v {"Hello", "Alaska", "Dad", "Peace"};
	std::vector<std::string> canBeTyped = sol.findWords(v);	

	for(auto word : canBeTyped)
		std::cout << word << std::endl;
	return 0;
}