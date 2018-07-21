#pragma once
#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

static auto _ = []() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

class Solution {
public:
	int maxArea(vector<int>& height) {
		int begin = 0;
		int len = height.size() - 1;
		int end = len;
		int area;
		while (begin <= end) 
		{
			area =max(area, (end - begin) * min(height[begin], height[end]));
			if (height[begin] < height[end]) 
			{
				begin++;
			}
			else 
			{
				end--;
			}
		}
		return area;
	}
};