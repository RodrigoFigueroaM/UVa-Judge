// g++ -std=c++14

#include <iostream>
#include <stack>


class Solution {
public:
	bool isValid(std::string s) 
	{
		std::stack<char> stack;
		for(auto ch : s)
		{
			if (ch == ')')
				if (!stack.empty() and stack.top() == '(')
					stack.pop();
				else
				return 0;
			else if (ch == '}' )
				if ( !stack.empty() and  stack.top() == '{')
					stack.pop();
				else
					return 0;
			else if (ch == ']')
				if(!stack.empty() and stack.top() == '[')
					stack.pop();
				else 
					return 0;
			else
				stack.push(ch);
		}
		return stack.empty() ;
    }
    bool isValidONE(string s) 
       {
           std::stack<char> stack;
   		for(auto ch : s)
   		{
   			if (ch == ')' and !stack.empty() and  stack.top() == '(')
   				stack.pop();
   			else if (ch == '}' and !stack.empty() and  stack.top() == '{')
   				stack.pop();
   			else if (ch == ']' and !stack.empty() and stack.top() == '[')
   				stack.pop();
   			else
   				stack.push(ch);
   		}
   		return stack.empty() and s.size() > 1;
       }
};

int main(int argc, char const *argv[])
{
	Solution s;
	
	bool ans = s.isValid("()");
	std::cout << ans << std::endl;  // 1

    ans = s.isValid("()[]{}");
   	std::cout << ans << std::endl;  // 1

    ans = s.isValid("(]");
   	std::cout << ans << std::endl;  // 0

    ans = s.isValid("([)]");
   	std::cout << ans << std::endl;  // 0
	
    ans = s.isValid("]");
   	std::cout << ans << std::endl;  // 0
	
	ans = s.isValid("(])");
   	std::cout << ans << std::endl;  // 0
	
	return 0;
}