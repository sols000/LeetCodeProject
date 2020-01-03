#include "pch.h"
#include "MergeArray.h"


void LeetDemo3::TestCase()
{
	vector<int> nums1 = { 2,7,9,0,0,0 };
	vector<int> nums2 = { 1,3,10 };
	mergeArray(nums1,3, nums2,3);
}


void LeetDemo3::mergeArray(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int Dest = m + n - 1;
	int im = m - 1;
	int in = n - 1;
	while (im >=0 || in >=0)
	{
		if (im < 0)
		{
			nums1[Dest--] = nums2[in--];
		}else if (in < 0)
		{
			nums1[Dest--] = nums1[im--];
		}
		else
		{
			if (nums1[im] > nums2[in])
			{
				nums1[Dest--] = nums1[im--];
			}
			else
			{
				nums1[Dest--] = nums2[in--];
			}
		}
	}
}
