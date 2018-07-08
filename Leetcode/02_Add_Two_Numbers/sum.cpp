#include "sum.h"

int main(int argc, char* argv[])
{
	ListNode *temp = NULL;
	ListNode *result = NULL;
	ListNode *l1 = new ListNode(2);
	temp = l1;
	temp->next = new ListNode(4);
	temp = temp->next;
	temp->next = new ListNode(3);
	ListNode *l2 = new ListNode(5);
	temp = l2;
	temp->next = new ListNode(6);
	temp = temp->next;
	temp->next = new ListNode(4);
	Solution *sl = new Solution();
	result = sl->addTwoNumbers(l1, l2);
	system("pause");
	return 0;
}