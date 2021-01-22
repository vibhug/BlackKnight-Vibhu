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
		else
			return false;
	}
	return true;
}

int
main()
{	
	cout << "Usage: Enter the string to be checked for Palindrome. An Empty string will cause to exit. \n";
	string s;
	while (std::getline(cin, s)) {
		if (s.empty())
			break;

		bool result = IsPalindrome(s);

		string ans =  result? "Is a" : "Is NOT a";
		std::cout << " Input String:  \" "   << s <<  " \"  " << ans << " palindrome." << '\n';
	}
	return 0;
}
