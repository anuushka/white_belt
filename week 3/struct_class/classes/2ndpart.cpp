#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class SortedStrings
{
	private:
		vector<string> data;
	public:
		void addString(const string& s)
		{
			data.push_back(s);
		}
		vector<string> getSortedString()
		{
			sort(data.begin(), data.end());
			return data;
		}	
};
 void printString(SortedStrings& strings)
 {
 	for(string &s : strings.getSortedString())
 	{
 		cout << s << " ";
	}
 }

int main()
{
	SortedStrings ss;
	ss.addString("abc");
	ss.addString("bce");
	ss.getSortedString();
	printString(ss);

}
