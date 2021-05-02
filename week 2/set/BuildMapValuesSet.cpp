#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

set<string> BuildMapValuesSet(const map<int, string> &s)
{
	set<string> values;
	for(auto i: s)
	{
		values.insert(i.second);
	}
	return values;
}

int main()
{
	set<string> values = BuildMapValuesSet({
    {1, "odd"},
    {2, "even"},
    {3, "odd"},
    {4, "even"},
    {5, "odd"}
});

for (const string& value : values) {
  cout << value << endl;
}
}
