#include "re.h"

int main(int argc, char* argv[])
{
	Solution * sol = new Solution();
	//vector<int> nums = { 0, 1, 2, 2, 3, 0, 4, 2 };
	vector<int> nums = { 3, 3 };
	cout << sol->removeElement(nums, 3) << endl;
	system("pause");
	return 0;
}