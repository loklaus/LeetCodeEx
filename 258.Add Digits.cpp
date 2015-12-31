// 258.Add Digits.cpp : 定义控制台应用程序的入口点。
//

/*
	Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

	For example:

	Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

	Follow up:
	Could you do it without any loop/recursion in O(1) runtime?

	Hint:

		A naive implementation of the above process is trivial. Could you come up with other methods?
		What are all the possible results?
		How do they occur, periodically or randomly?
		You may find this Wikipedia article useful.[https://en.wikipedia.org/wiki/Digital_root]
*/

#include "stdafx.h"  
#include <iostream>

using std::cout;
using std::endl;

class Solution {
public:
	int addDigits(int num) {
		if (num == 0)
			return 0;
	
		if (num % 9 == 0)
			return 9;
	
		return num - 9 * (num / 9);
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Solution solu;
	cout << solu.addDigits(931) << endl;
	return 0;
}

