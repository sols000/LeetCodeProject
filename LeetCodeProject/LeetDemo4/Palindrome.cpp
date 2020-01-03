#include "pch.h"
#include "Palindrome.h"

void LeetDemo4::TestCase()
{
	string strTest = "A man, a plan, a canal: Panama";
	bool Res = isPalindrome(strTest);
	printf("Test Finshed!\n");
}

//auto to upper case
bool isValidChar(char &c)
{
	if (c >= 0x30 && c <= 0x39)//Digit
	{
		return true;
	}
	else if (c >= 0x41 && c <= 0x5A)//upper case
	{
		return true;
	}
	else if (c >= 0x61 && c <= 0x7A)//lower case
	{
		c -= 0x20;
		return true;
	}
	else
	{
		return false;
	}
}

bool LeetDemo4::isPalindrome(string s)
{
	int size = s.length();

	for (int i = 0, j = size - 1; i < j;)
	{	
		char befor = s.at(i);
		char affter = s.at(j);
		if (!isValidChar(befor))
		{
			i++;
			continue;
		}
		if (!isValidChar(affter))
		{
			j--;
			continue;
		}
		if (befor != affter)
		{
			return false;
		}
		else
		{
			i++;
			j--;
		}
	}
	return true;
}
