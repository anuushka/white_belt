#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	int n;
	string command;
	map<string, set<string> > synonym; 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> command;
		if(command == "ADD")
		{
			string word1, word2;
			cin >> word1 >> word2;
			synonym[word1].insert(word2);
			synonym[word2].insert(word1);
		}
		else if(command == "COUNT")
		{
			string word;
			cin >> word;
			cout << synonym[word].size() << endl;
		}
		else if(command == "CHECK")
		{
			string word1, word2;
			cin >> word1 >> word2;
			if(synonym[word1].count(word2) == 1)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}	
		}
	}
	
}
