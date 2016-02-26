// 263.Ugly Number.cpp : 定义控制台应用程序的入口点。
//

/*
	Write a program to check whether a given number is an ugly number.

	Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.

	Note that 1 is typically treated as an ugly number.
*/
#include "stdafx.h"
#include <iostream>

using namespace std;

class Solution {
public:
	bool isUgly(int num) {
		if (num < 0 )
			return false;
		// 根据定理： 每个正整数都可以被唯一的表示为一组素数的乘积。
		// 用2、3、5对num来进行整除，最后一定得到的是质数或者1
		while (num >= 2 && num % 2 == 0) num /= 2;
		while (num >= 3 && num % 3 == 0) num /= 3;
		while (num >= 5 && num % 5 == 0) num /= 5;
		
		return num == 1;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Solution solut;
	cout << solut.isUgly(22) << endl; 
	return 0;
}

