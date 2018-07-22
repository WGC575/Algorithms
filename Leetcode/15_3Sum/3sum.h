#pragma once
#include <iostream>
#include <vector> 
#include <algorithm>
#include <unordered_map>

using namespace std;

static auto _ = []() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();
/*
class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
unordered_map<int, int> hash;
int len = nums.size();
vector<vector<int>> result;
for(int i = 0; i < len; ++i)
{
hash.insert(make_pair(nums[i], i));
}
for(int i = 0; i < len - 1; ++i)
{
for(int j = i + 1; j < len; ++j)
{
unordered_map<int, int>::iterator itr = hash.find(-nums[i] - nums[j]);
if(itr != hash.end() && itr->second > j)
{
result.push_back({nums[i], nums[j], nums[itr->second]});
}
}
}
return result;
}
};*/
class Solution {
public:
	vector<vector<int> > threeSum(vector<int> &num) {

		vector<vector<int> > res;

		std::sort(num.begin(), num.end());

		for (int i = 0; i < num.size(); i++) {

			int target = -num[i];
			int front = i + 1;
			int back = num.size() - 1;

			while (front < back) {

				int sum = num[front] + num[back];

				// Finding answer which start from number num[i]
				if (sum < target)
					front++;

				else if (sum > target)
					back--;

				else {
					vector<int> triplet(3, 0);
					triplet[0] = num[i];
					triplet[1] = num[front];
					triplet[2] = num[back];
					res.push_back(triplet);

					// Processing duplicates of Number 2
					// Rolling the front pointer to the next different number forwards
					while (front < back && num[front] == triplet[1]) front++;

					// Processing duplicates of Number 3
					// Rolling the back pointer to the next different number backwards
					while (front < back && num[back] == triplet[2]) back--;
				}

			}

			// Processing duplicates of Number 1
			while (i + 1 < num.size() && num[i + 1] == num[i])
				i++;

		}

		return res;

	}
};