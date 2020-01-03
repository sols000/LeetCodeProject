#include "pch.h"
#include "longestPalindrome.h"

void Leet998::TestCase()
{
	string StrTest = "aab";
	int Res = longestPalindrome(StrTest);
	cout << "Test Finish";
}

int Leet998::longestPalindrome(string s)
{
	if (s.length() < 1)
	{
		return 0;
	}
	unordered_map<char, int> CountChar;

	for (int i = 0; i < s.length(); i++)
	{
		CountChar[s.at(i)]++;
	}
	int Sum = 1;
	for (auto item:CountChar)
	{
		Sum += item.second/2;
	}
	return Sum;
}
