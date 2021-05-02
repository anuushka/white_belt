#include<iostream>
using namespace std;

bool IsPalindrom(string s) {
	int len = s.size();
    for (int i = 0; i < len; ++i) {
        if (s[i] != s[len- i - 1]) {
            return false;
        }
    }
    return true;
}
int main()
{
	string word;
	cin >> word;
	if(IsPalindrom(word) == true)
		cout << "True";
	else cout << "False";
	return 0;
}
