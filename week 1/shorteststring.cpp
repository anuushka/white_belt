#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string input;
	vector<string> words;
	for(int i = 0; i < 3; i++)
	{
		cin >> input;
		words.push_back(input);
	}
	sort(words.begin(), words.end());
	cout << words[0];
}
