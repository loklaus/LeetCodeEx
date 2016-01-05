// 283.Move Zeroes.cpp : 定义控制台应用程序的入口点。
//
/*
	Given an array nums, write a function to move all 0's to the end of 
	
	it while maintaining the relative order of the non-zero elements.

	For example, given nums = [0, 1, 0, 3, 12], 
	
	after calling your function, nums should be [1, 3, 12, 0, 0].

	Note:
	You must do this in-place without making a copy of the array.
	Minimize the total number of operations.
*/

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	void moveZeroes(vector<int>& nums) {

		/*int i = 0, j = nums.size();

		if (i == j) return;

		while ( j > 0 && nums[j - 1] == 0)j--;
		if (j <= i) return;

		for (int i = 0; i < j; i++)
		{
			if (nums[i] == 0)
			{
				for (int k = i; k < j - 1; k++)
				{
					nums[k] = nums[k + 1];
				}
				nums[--j] = 0;
				i--;
			}
		}*/

		int cnt = 0;//统计非0数个数
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (nums[i] != 0)
			{
				nums[cnt++] = nums[i];
			}
		}

		for (size_t i = cnt; i < nums.size(); i++)
		{
			nums[i] = 0;
		}
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec{1, 0, 0, 1, 0, 1};
	Solution solt;
	solt.moveZeroes(vec);
	for each (int var in vec)
		cout << var << " ";
	cout << endl;
	return 0;
}

