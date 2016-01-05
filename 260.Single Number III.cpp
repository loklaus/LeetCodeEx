// 260.Single Number III.cpp : 定义控制台应用程序的入口点。
//

/*
	Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice.
	
	Find the two elements that appear only once.

	For example:

	Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

	Note:
	The order of the result is not important. So in the above example, [5, 3] is also correct.
	Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		/*unordered_set<int> tempSet;
		for (auto var : nums)
		{
			auto iter = tempSet.find(var);
			if (iter == tempSet.end())
			{
				tempSet.insert(var);
			}
			else
				tempSet.erase(iter);
		}
		return vector<int>( tempSet.cbegin(), tempSet.cend() );*/



		int len = nums.size();
		int AxorB = 0;
		for (int i = 0; i < len; i++)
		{ 
			AxorB ^= nums[i];
		}
		int mask = AxorB & (~(AxorB - 1)); //取的AxorB中的最后一位二进制位
		int A = 0; int B = 0; 
		for (int i = 0; i < len; i++)
		{	
			if ((mask&nums[i]) == 0)
				A ^= nums[i]; 
			else
				B ^= nums[i];
		} 
		return vector<int>({ A, B });
	}
};



int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec{ 1, 2, 1, 3, 2, 5 };
	Solution solt;
	solt.singleNumber(vec);
	for (auto var : solt.singleNumber(vec))
		cout << var << " ";
	return 0;
}

