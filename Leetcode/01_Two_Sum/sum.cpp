#include "sum.h"

int main(int argc, char* argv[])
{
	Solution *sl = new Solution();
	int target = 9;
	vector<int> nums = { 2, 7, 11, 15 };

	sl->twoSum(nums, target);
	system("pause");
	return 0;
}