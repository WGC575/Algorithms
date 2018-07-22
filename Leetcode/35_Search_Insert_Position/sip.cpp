#include "sip.h"

int main(int argc, char* argv[])
{
	Solution sol = Solution();
	vector<int> input = { 1,3,5,6 };
	cout << sol.searchInsert(input, 5);
	system("pause");
	return 0;
}