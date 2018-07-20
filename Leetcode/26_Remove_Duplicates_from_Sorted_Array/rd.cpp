#include "rd.h"

int main() 
{
	Solution sol = Solution();
	vector<int> result = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	cout << sol.removeDuplicates(result) << endl;
	system("pause");
	return 0;
}