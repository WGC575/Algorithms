#include "ri.h"

int main(int argc, char* argv[])
{
	Solution *sl = new Solution();
	signed int input = 123;
	int result = 0;

	result = sl->reverse(input);
	cout << result;
	system("pause");
	return 0;
}