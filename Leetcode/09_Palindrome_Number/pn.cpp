#include "pn.h"

int main(int argc, char* argv[]) 
{
	Solution *sl = new Solution();
	signed int input = 11;
	int result = 0;

	cout << sl->isPalindrome(input) << endl;
	system("pause");
	return 0;
}