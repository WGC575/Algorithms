#pragma once
#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>

#define  MAX(x, y) (((x) > (y)) ? (x) : (y))

using namespace std;

static auto ___ = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return nullptr;
}();
/*
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		deque<char> win = {};
		unordered_map<char, int> hash = {};
		int count = 0;
		if (s.size() == 0)
		{
			return 0;
		}
		if (s.size() == 1)
		{
			return 1;
		}
		for (int i = 0; i < s.size(); ++i)
		{
			if (hash.find(s[i]) != hash.end())
			{
				while (win.front() != s[i])
				{
					hash.erase(win.front());
					win.pop_front();
				}
				hash.erase(s[i]);
				win.pop_front();
			}
			hash.insert(make_pair(s[i], 1));
			win.push_back(s[i]);
			if (count < win.size())
			{
				count = win.size();
			}
		}
		return count;
	}
};
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_map<char, int> hash = {};
		int count = 0;
		if (s.size() == 0)
		{
			return 0;
		}
		if (s.size() == 1)
		{
			return 1;
		}
		int j = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (hash.find(s[i]) != hash.end())
			{
				while (s[j] != s[i])
				{
					hash.erase(s[j]);
					j++;
				}
				hash.erase(s[j]);
				j++;
			}
			hash.insert(make_pair(s[i], 1));
			if (count < i - j + 1)
			{
				count = i - j + 1;
			}
		}
		return count;
	}
};*/

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int length = s.length();
		int i = 0;
		int pre = -1;
		int max_sub_length = 0;
		int substr[256] = { 0 };//根据ASCII表建立一对一哈希表
		memset(substr, -1, sizeof(substr));
		for (; i < length; ++i)
		{
			pre = MAX(pre, substr[s[i]]);
			max_sub_length = MAX(max_sub_length, i - pre);
			substr[s[i]] = i;
		}
		return max_sub_length;
	}
};