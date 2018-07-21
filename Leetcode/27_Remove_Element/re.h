#pragma once
#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>

using namespace std;

static auto ___ = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int len = nums.size();
		if (len == 0)
		{
			return 0;
		}
		int head = 0;
		int tail = len - 1;
		while (tail >= head)
		{
			if (nums[tail] != val && nums[head] == val)
			{
				nums[head] = nums[tail];
				head++;
				tail--;
			}
			else if (nums[tail] == val && nums[head] == val)
			{
				tail--;
			}
			else if (nums[tail] == val && nums[head] != val)
			{
				head++;
				tail--;
			}
			else
			{
				head++;
			}
		}
		return (head + 1);
	}
};