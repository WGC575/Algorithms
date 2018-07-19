#pragma once

#include <iostream>

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		int y = 0;
		int remain = 0;
		if (x < 10 && x >= 0)
		{
			return true;
		}
		if (x < 0 || x % 10 == 0)
		{
			return false;
		}

		while (x > y)
		{

			if (x == y || (x / 10 == y && remain != 0))
			{
				return true;
			}
			remain = x % 10;
			x /= 10;
			y *= 10;
			y += remain;
		}
		if (x == y)
		{
			return true;
		}
		return false;
	}
};