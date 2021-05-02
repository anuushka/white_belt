#include<iostream>
#include<map>
using namespace std;

map<char, int> counter(string &s)
{
	map<char, int> count;
	for(auto c: s)
	{
		++count[c];
	}
	return count;
}

int main()
{
	int n;
	string first, second;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> first >> second;
		if(counter(first) == counter(second))
		{
			cout << "YES"<< endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
