#pragma once
#include <iostream>
#include <vector> 
#include <algorithm>
#include <unordered_map>

using namespace std;

static auto _ = []() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode * removeNthFromEnd(ListNode* head, int n) {
		if (head == nullptr || head->next == nullptr || n < 1)
		{
			return nullptr;
		}
		ListNode * h = head;
		ListNode * t = head;
		int i = 0;
		for (; i < n; i++)
		{
			h = h->next;
		}
		while (h != nullptr && h->next != nullptr)
		{
			h = h->next;
			t = t->next;
		}
		if (t->next != nullptr) 
		{
			if (t == head && h == nullptr)
			{
				head= head->next;
			}
			else 
			{
				t->next = t->next->next;
			}
			
		}
		else 
		{
			return nullptr;
		}
		
		return head;
	}
};