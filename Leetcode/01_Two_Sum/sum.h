#pragma once
/**************************************************************************************************************
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

哈希排序与容器map的结合
***************************************************************************************************************/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> hash;
		vector<int> result;
		for (int i = 0; i < nums.size(); ++i) 
		{
			hash[nums[i]] = i;
		}

		for (int i = 0; i < nums.size(); ++i) 
		{
			int remain = target - nums[i];
			if (hash.find(remain) != hash.end() && hash[remain] != i) 
			{
				
				result.push_back(i);
				result.push_back(hash[remain]);
				return result;
			}
		}
	}
};
