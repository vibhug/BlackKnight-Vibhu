#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

bool
IsPalindrome(const string s)
{
	int len = s.length();
	for (int i = 0; i < len/2; i++) {
		char left = toupper(s[i]);
		char right = toupper(s[len -1- i]);
		if (left == right)
			continue;
		else return false;
	}
	return true;
}

int
main()
{
	string a = "Dad";
	string b = "1881";
	string c = "Steps on no pets";

	bool A = IsPalindrome(a);
	bool B = IsPalindrome(b);
	bool C = IsPalindrome(c);
	std::cout << " Is string " << a << " a palindrome: " << A << '\n';
	std::cout << " Is string " << b << " a palindrome: " << B << '\n';
	std::cout << " Is string " << c << " a palindrome: " << C << '\n';

	return 0;
}
