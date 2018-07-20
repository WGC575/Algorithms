#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int ptr = 1;
		for (int i = 1; i < nums.size(); ++i)
		{
			if (nums[i] == nums[i - 1])
			{

			}
			else
			{
				nums[ptr] = nums[i];
				ptr++;
			}
		}
		return (ptr);
	}
};