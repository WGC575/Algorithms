#include "sum.h"

int main(int argc, char* argv[])
{
	Solution *sl = new Solution();
	//int target = 9;
	//vector<int> nums = { 2, 7, 11, 15 };
	int target = 6;
	vector<int> nums = {3, 3};

	vector<int> result = sl->twoSum(nums, target);
	for (int i = 0; i < 2; ++i) 
	{
		cout << result[i] << endl;
	}
	system("pause");
	return 0;
}