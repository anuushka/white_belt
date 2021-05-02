#include<iostream>
#include<set>
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
	set<string> isFamousPeople;
	isFamousPeople.insert("Unurjargal");
	isFamousPeople.insert("Munguntsetseg");
	isFamousPeople.insert("Anujin");
	printSet(isFamousPeople);
	isFamousPeople.erase("Anujin");
    printSet(isFamousPeople);
    
    set<string> months = {"January", "February", "March"};
	printSet(months);
	cout << months.count("January") << endl;
	
	map<string, int> months_num = {{"January", 1}, {"February", 2}, {"March", 3}};
	cout << months_num.count("January") << endl;
}
