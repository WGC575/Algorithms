#pragma once
#include <iostream>
#include <vector> 

using namespace std;

static auto _ = []() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

int max(int a, int b)
{
	return (a >= b ? a : b);
}

int area(int begin, int end, vector<int> &height)
{
	if ()
		return max(area(begin + 1, end, height), area)
}

class Solution {
public:
	int maxArea(vector<int>& height) {

	}
};