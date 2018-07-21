#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> arr = {};
		int n = nums1.size() + nums2.size();
		int i_1 = 0;
		int i_2 = 0;
		for (int i = 0; i < n; ++i)
		{
			if(i_1 >= nums1.size() || i_2 >= nums2.size())
			{
				if (i_1 >= nums1.size() && i_2 < nums2.size())
				{
					for (int j = i_2; j < nums2.size(); ++j)
					{
						arr.push_back(nums2[j]);
						i++;
					}
				}
				else if (i_2 >= nums2.size() && i_1 < nums1.size())
				{
					for (int j = i_1; j < nums1.size(); ++j)
					{
						arr.push_back(nums1[j]);
						i++;
					}
				}
			}
			else 
			{
				if (nums1[i_1] >= nums2[i_2])
				{
					arr.push_back(nums2[i_2]);
					i_2++;
				}
				else
				{
					arr.push_back(nums1[i_1]);
					i_1++;
				}
			}
			
		}
		if (n % 2 == 1)
		{
			return ((double)arr[n / 2]);
		}
		else
		{
			return ((double)(arr[n / 2 - 1] + arr[n / 2]) / 2);//强制类型转换
		}
	}
};