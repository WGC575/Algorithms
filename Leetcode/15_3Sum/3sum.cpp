#include "3sum.h"

int main(int argc, char* argv[])
{
	Solution sol = Solution();
	vector<int> input = { -1, 0, 1, 2, -1, -4 };
	vector<vector<int>>res = sol.threeSum(input);
	system("pause");
	return 0;
}