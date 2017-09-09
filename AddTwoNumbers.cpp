
// g++ -std=c++14

#include <stdlib.h>
#include <iostream>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode * next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {

    	ListNode * solution = nullptr;
    	ListNode * ln = new ListNode(0);

		solution = ln;

    	int rem = 0;
    	int valOne =  0;
		int valTwo =  0;
    	while(l1 || l2 || rem != 0)
		{
		
			ListNode * lnNew = new ListNode(rem);
			ln->next = lnNew;
			ln = lnNew;
			
			ln->val = (valOne + valTwo) % 10 + rem;

			valOne = l1->val? l1->val : 0;
			valTwo = l2->val? l2->val : 0;
		
			rem = (valOne + valTwo) / 10;
			
			l1 = l1->next;
			l2 = l2->next;

		
			
		} 	
	       return solution->next;
	}
};

int main(int argc, char const *argv[])
{
	// Solution s;
	ListNode *li1 = new ListNode(5);
	// ListNode *li12 = new ListNode(8);
	// ListNode *li13 = new ListNode(3);

	// li1->next = li12;
	// li12->next = li13;

	ListNode *li2  = new ListNode(5);
	// ListNode *li22  = new ListNode(6);
	// ListNode *li23  = new ListNode(4);

	// li2->next = li22;
	// li22->next = li23;

	Solution s;
	ListNode *l = s.addTwoNumbers(li1, li2);
// std::cout << l->val << std::endl;
	while(l)
	{
		std::cout << l->val << std::endl;
		l = l->next;
	}

	return 0;
}