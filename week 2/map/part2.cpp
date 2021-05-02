#include<iostream>
#include<vector>
#include<map>
using namespace std;

void PrintMap(map<string, int> &m)
{
    cout << m.size() << endl;
	for(const auto &item: m)
	{
		cout << item.first << " " << item.second << endl;
	}
}

int main()
{
cout << "______________Part 1______________________" << endl;
	map<string, int> m = {{"one", 1}, {"two", 2}, {"three",3}};
	PrintMap(m);
	m.erase("three");
	PrintMap(m);

cout << "______________Part 2______________________" << endl;
    vector<string> words = {"one", "two", "three"};
    map <string, int> counter;
    counter["a"];
    for(auto word: words)
    {
        counter[word]++;
    }
    	PrintMap(counter);
cout << "______________Part 3______________________" << endl;
vector<string> dict = {"one", "two", "three"};
map<char, vector<string> > grouped_words;

for(auto word: dict)
{
    grouped_words[word[0]].push_back(word);
}

for(auto item: grouped_words)
{
    cout << item.first << ":" ;
    for(auto word : item.second)
    {
        cout << word << " ";
    }
    cout << endl;
}

}
