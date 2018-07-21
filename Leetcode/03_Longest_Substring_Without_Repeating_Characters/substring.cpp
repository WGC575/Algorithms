#include "substring.h"

int main(int argc, char* argv[]) 
{
	Solution *sl = new Solution();
	//string s = "abba"; 
	string s = "tmmzuxt";
	int result = 0;

	result = sl->lengthOfLongestSubstring(s);
	cout << result << endl;
	system("pause");
	return 0;
}