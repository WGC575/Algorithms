#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution 
{
public:
	string longestCommonPrefix(vector<string>& strs) {
		vector<string::iterator> itrs;
		int flag = 1;
		string result = "";
		int size_min = INT32_MAX;
		if (strs.size() == 0) 
		{
			return result;
		}
		for (int i = 0; i < strs.size(); ++i) 
		{
			if (strs[i].size() < size_min) 
			{
				size_min = strs[i].size();
			}
		}
		if (size_min == 0)
		{
			return result;
		}
		for (int i = 0; i < size_min; ++i) 
		{
			char temp = strs[0][i];
			for (int j = 0; j < strs.size(); ++j) 
			{
				if (temp != strs[j][i]) 
				{
					flag = 0;
				}
			}
			if (flag == 1) 
			{
				result.push_back(temp);
			}
			else 
			{
				return result;
			}
		}
		return result;
	}
};