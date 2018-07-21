#pragma once
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int myAtoi(string str) {
		int sign = 1;
		int len = str.size();
		int sign_count = 0;
		long long result = 0;
		int len_num = 0;
		int i = 0;
		for (i = 0; i < len; ++i)
		{
			if (str[i] == ' ')
			{

			}
			else if ((str[i] > '9' || str[i] < '0') && str[i] != '+' && str[i] != '-')
			{
				return 0;
			}
			else if ((str[i] <= '9' && str[i] >= '0'))
			{
				break;
			}
			else 
			{
				if (i < len - 1 && (str[i + 1] > '9' || str[i + 1] < '0')) 
				{
					return 0;
				}
			}
		}
		if (sign_count > 1) 
		{
			return 0;
		}
		if (i != 0) {
			if (str[i - 1] == '+')
			{
				sign = 1;
			}
			else if (str[i - 1] == '-')
			{
				sign = -1;
			}
		}
		while (str[i] <= '9' && str[i] >= '0')
		{
			result = result * 10 + (long long)(str[i] - 48);
			++i;
			len_num++;
			if (result - 1 > INT_MAX)
			{
				break;
			}
		}
		result *= sign;
		if (result > INT_MAX)
		{
			return INT_MAX;
		}
		else if (result < INT_MIN)
		{
			return INT_MIN;
		}
		else
		{
			return result;
		}
	}
};
