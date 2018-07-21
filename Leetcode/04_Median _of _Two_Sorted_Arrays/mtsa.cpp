#include "mtsa.h"

int main ()
{
	Solution sol = Solution();
	vector<int> nums1 = { 1, 2 };
	vector<int> nums2 = { 3, 4 };
	cout << sol.findMedianSortedArrays(nums1, nums2) << endl;
	system("pause");
	return 0;
}