#pragma once
/**************************************************************************************************************
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
***************************************************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int n = nums.size();
		int i = 0;
		vector<int> result = { 0, 0 };

		while (i != n)
		{
			if (nums[i] + nums[n] == target)
			{
				result[0] = nums[i];
			}
		}

		if (i == n)
		{
			return result;
		}
	}
};
