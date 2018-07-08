#pragma once
/**************************************************************************************************************
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.

***************************************************************************************************************/

#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {
		if (NULL == l1 || NULL == l2) 
		{
			return NULL;
		}
		int carry = 0;
		ListNode *result = NULL;
		ListNode *result_ptr = NULL;
		
		while (NULL != l1 || NULL != l2)
		{
			int sum = carry; //进位
			if (NULL != l1) 
			{
				sum += l1->val;
				l1 = l1->next;
			}
			if (NULL != l2) 
			{
				sum += l2->val;
				l2 = l2->next;
			}
			
			carry = sum / 10;
			ListNode *temp =  new ListNode(sum % 10);

			if (NULL == result)
			{
				result = temp;
				result_ptr = temp;
			}
			else 
			{
				result_ptr->next = temp;
				result_ptr = result_ptr->next;
			}
		}

		if (carry > 0) 
		{
			ListNode *temp = new ListNode(1);
			result_ptr->next = temp;
		}
		return result;
	}
};