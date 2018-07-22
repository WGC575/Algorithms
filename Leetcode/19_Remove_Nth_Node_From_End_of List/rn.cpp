#include "rn.h"

int main(int argc, char* argv[])
{
	ListNode *temp = NULL;
	ListNode *result = NULL;
	ListNode *l1 = new ListNode(1);
	temp = l1;
	temp->next = new ListNode(2);
	temp = temp->next;
	/*temp->next = new ListNode(3);
	temp = temp->next;
	temp->next = new ListNode(4);
	temp = temp->next;
	temp->next = new ListNode(5);*/
	Solution sol = Solution();
	result = sol.removeNthFromEnd(l1, 1);
	system("pause");
	return 0;
}