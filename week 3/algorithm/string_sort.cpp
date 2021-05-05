#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string toLower(string &str)
{
	string low;
	for(auto c: str)
	{
	    c = tolower(c);
	    low.push_back(c);
	}
	return low;
}

bool comp(string a, string b)
{
	a = toLower(a);
	b = toLower(b);
	return (a<b);
}

void print(vector<string> &v)
{
    for(const auto &s: v)
    {
        cout << s << " ";
    }
}

int main()
{
	int n;
	vector<string> v;
	cin >> n;
	for(int i=0; i < n; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	
	sort(begin(v), end(v), comp);
	print(v);
}
