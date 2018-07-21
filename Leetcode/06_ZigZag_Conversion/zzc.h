#pragma once
#include <iostream>
#include <string>

using namespace std;

static auto _ = []() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

class Solution {
public:
	static string convert(string s, int numRows) {
		if (numRows <= 1 || numRows > s.size()) return s;
		const int block = 2 * numRows - 2;
		string result;
		for (int i = 0; i < numRows; ++i) {
			int j = 0;
			while (i + j * block < s.size()) {
				result += s[i + j * block];
				if (i>0 && i<numRows - 1 && j*block + block - i < s.size()) result += s[j*block + block - i];
				j++;
			}
		}
		return result;
	}
};