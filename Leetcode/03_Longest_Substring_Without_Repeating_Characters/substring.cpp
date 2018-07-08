#include "substring.h"

int main(int argc, char* argv[]) 
{
	Solution *sl = new Solution();
	string s = "abcabcbb"; 
	int result = 0;

	result = sl->lengthOfLongestSubstring(s);
	cout << result;
	system("pause");
	return 0;
}