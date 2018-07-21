#include "atoi.h"

int main(int argc, char* argv[])
{
	Solution sol = Solution();
	//string s = "9223372036854775808";
	string s = "   -42";
	cout << sol.myAtoi(s) << endl;
	
	system("pause");
	return 0;
}