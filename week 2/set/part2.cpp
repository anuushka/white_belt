#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;

void printSet(set<string> &s)
{
    cout << "SIZE: " << s.size() << endl;
	for(auto x: s)
	{
		cout << x << endl;
	}
}
int main()
{
	vector<string> v = {"a", "b", "a"};
	set<string> s(begin(v), end(v));
	printSet(s);

}
