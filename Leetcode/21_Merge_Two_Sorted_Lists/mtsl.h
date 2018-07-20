#pragma once
#include <iostream>
#include <string>
#include <stack>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode * result = nullptr;
		ListNode * ptr = nullptr;
		while (l1 != nullptr && l2 != nullptr)
		{
			if (l1->val >= l2->val)
			{
				if (result == nullptr)
				{
					result = new ListNode(l2->val);
					ptr = result;
					l2 = l2->next;
				}
				else
				{
					ptr->next = new ListNode(l2->val);
					ptr = ptr->next;
					l2 = l2->next;
				}
			}
			else if (l1->val < l2->val)
			{
				if (result == nullptr)
				{
					result = new ListNode(l1->val);
					ptr = result;
					l1 = l1->next;
				}
				else
				{
					ptr->next = new ListNode(l1->val);
					ptr = ptr->next;
					l1 = l1->next;
				}
			}
		}
		if (l1 == nullptr && l2 != nullptr)
		{
			if (result == nullptr)
			{
				result = l2;
			}
			else
			{
				ptr->next = l2;
			}

			return result;
		}
		else if (l2 == nullptr && l1 != nullptr)
		{
			if (result == nullptr)
			{
				result = l1;
			}
			else
			{
				ptr->next = l1;
			}

			return result;
		}
		else
		{
			return nullptr;
		}
	}
};