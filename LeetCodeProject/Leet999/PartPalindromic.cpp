#include "pch.h"
#include "PartPalindromic.h"

void Leet999::TestCase()
{
	string StrTest = "aab";
	vector<vector<string>> Res = partition(StrTest);
	cout << "Test Finish";
}

void SubSplit(string subStr, vector<vector<string>> &OutRes)
{

}

vector<vector<string>> Leet999::partition(string s)
{
	vector<vector<string>> Res;
	int size = s.length();
	if (size == 0)
	{
		return Res;
	}
	vector<string> sigleChar = {{s.at(0)}};
	for (int i = 1; i < size; i++)
	{
		sigleChar.push_back(string{s.at(i)});//单字符回文分割

		string SubStr = s.substr(0,i+1);


	}
	Res.push_back(sigleChar);
	return vector<vector<string>>();
}
