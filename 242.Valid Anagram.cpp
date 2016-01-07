// 242.Valid Anagram.cpp : 定义控制台应用程序的入口点。
//

/*
	Given two strings s and t, write a function to determine if t is an anagram of s.

	For example,
	s = "anagram", t = "nagaram", return true.
	s = "rat", t = "car", return false.

	Note:
	You may assume the string contains only lowercase alphabets.

	Follow up:
	What if the inputs contain unicode characters? How would you adapt your solution to such case?

	Subscribe to see which companies asked this question
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		/*sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		return s == t;*/

		// only lowercase alphabets
		if (s.length() != t.length())return false;
		int len = s.length();
		int bit[26]{0};
		for (int i = 0; i < len; i++)
		{
			bit[s[i] - 'a']++;
		}

		for (int i = 0; i < len; i++)
		{
			if (--bit[t[i] - 'a'] < 0)
				return false;
		}

		return true;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Solution solt;
	cout << solt.isAnagram("a", "b") << endl;
	return 0;
}

