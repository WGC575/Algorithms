#pragma once
#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
	bool isValid(string s) {
		if (s.size() == 0)
		{
			return true;
		}
		stack<char> judge;
		for (int i = 0; i < s.size(); ++i)
		{
			if (judge.empty())
			{
				judge.push(s[i]);
			}
			else if (
				(judge.top() == '(' && s[i] == ')') ||
				(judge.top() == ')' && s[i] == '(') ||
				(judge.top() == '[' && s[i] == ']') ||
				(judge.top() == ']' && s[i] == '[') ||
				(judge.top() == '{' && s[i] == '}') ||
				(judge.top() == '}' && s[i] == '{')
				)
			{
				judge.pop();
			}
			else
			{
				judge.push(s[i]);
			}
		}
		if (!judge.empty())
		{
			return false;
		}
		else 
		{
			return true;
		}
	}
};