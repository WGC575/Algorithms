#include "re.h"

int main(int argc, char* argv[]) 
{
	Solution sol = Solution();
	string s = "mississippi";
	string p = "mis*is*p*.";
	cout << sol.isMatch(s, p) << endl;
	system("pause");
	return 0;
}