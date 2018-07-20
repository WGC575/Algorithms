#include "mtsl.h"

int main(int argc, char* argv[])
{
	/*
	ListNode * temp = new ListNode(2);
	ListNode * l1 = new ListNode(1);
	ListNode * l1_ = l1;
	l1_->next = temp;
	l1_ = l1_->next;
	temp = new ListNode(4);
	l1_->next = temp;
	l1_ = l1_->next;

	ListNode * l2 = new ListNode(1);
	l1_ = l2;
	temp = new ListNode(3);
	l1_->next = temp;
	l1_ = l1_->next;
	temp = new ListNode(4);
	l1_->next = temp;
	l1_ = l1_->next;
	*/
	ListNode * temp = new ListNode(3);
	ListNode * l1 = new ListNode(-9);
	ListNode * l1_ = l1;
	l1_->next = temp;
	l1_ = l1_->next;

	ListNode * l2 = new ListNode(5);
	l1_ = l2;
	temp = new ListNode(7);
	l1_->next = temp;
	l1_ = l1_->next;

	Solution sol = Solution();
	ListNode * result = sol.mergeTwoLists(l1, l2);
	while (result != nullptr) 
	{
		cout << result->val << endl;
		result = result->next;
	}
	system("pause");
	return 0;
}