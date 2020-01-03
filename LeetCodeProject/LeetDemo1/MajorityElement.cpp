#include "pch.h"
#include "MajorityElement.h"

namespace Solution1
{
	void TestCase()
	{
		//vector<int> TheNums = { 4,1,3,4,4,5,4 };
		//int Res = majorityElement(TheNums);
		vector<int> TheNums = { 3,1,3,2,3,2,2,3 };
		int Res = majorityElement2(TheNums);
		cout << Res << endl;
	}
	//我的算法
	int majorityElement(vector<int>& nums)
	{
		unordered_map<int, int> CountMap;
		pair<int, int> maxCount = make_pair(nums[0], 1);
		for (int item : nums)
		{
			auto it = CountMap.find(item);
			if (it != CountMap.end())
			{
				if (it->second >= maxCount.second)
				{
					maxCount = *it;
				}
				it->second += 1;
			}
			else
			{
				CountMap[item] = 1;
			}
		}
		return maxCount.first;
	}

	//我的算法2
	int majorityElement2(vector<int>& nums)
	{
		unordered_map<int, int> CountMap;
		int ResNum;
		int CountMax = 0;
		for (int item : nums)
		{
			int Count = (++CountMap[item]);
			if (Count > CountMax)
			{
				CountMax = Count;
				ResNum = item;
			}
		}
		return ResNum;
	}

	//官方Demo
	int majorityElement1(vector<int>& nums)
	{
		int cnt = 0;
		int cur;
		for (int i = 0; i < nums.size(); i++)
		{
			if (cnt == 0)
			{
				cur = nums[i];
				cnt++;
			}
			else
			{
				if (nums[i] == cur)
					cnt++;
				else
					cnt--;
			}
		}
		return cur;
	}

}
