#pragma once
#include <iostream>

using namespace std;
class Solution {
public:
	int reverse(int x) {
		int flag = 0;
		long long y = (long long)x;
		long long result = 0;
		int remain = 0;
		if (y < 0)
		{
			flag = 1;
			y = -y;
		}
		while (y > 9)
		{
			remain = y % 10;
			y /= 10;
			result += remain;
			result *= 10;
		}
		result += y;
		if (result > INT32_MAX)
		{
			return 0;
		}
		if (flag == 1)
		{
			return (int)-result;
		}
		else
		{
			return (int)result;
		}
	}
};