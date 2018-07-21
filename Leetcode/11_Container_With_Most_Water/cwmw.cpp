#include "cwmw.h"

int main(int argc, char* argv[]) 
{
	Solution sol = Solution();
	vector<int> input = { 1,8,6,2,5,4,8,3,7 };
	cout << sol.maxArea(input) << endl;
	system("pause");
	return 0;
}