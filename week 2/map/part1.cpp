#include<iostream>
#include<map>

using namespace std;
void printMap(const map<int, string> &m)
{
    cout << "Size: " << m.size() << endl;
	for(auto item: m)
	{
		cout << item.first << " : " << item.second << endl;
	}
}

map<string, int> BuildReversedMap(map<int, string> &m)
{
    map<string, int> result;
    for(auto item: m)
    {
        result[item.second] = item.first;
    }
    return result;
}

void printReversedMap(const map<string, int> &m)
{
    cout << "Size: " << m.size() << endl;
	for(auto item: m)
	{
		cout << item.first << " : " << item.second << endl;
	}
}

int main()
{
	map<int, string> events;
	events[1950] = "Bjarne";
	events[1996] = "Anujin";
	events[1972] = "Mungun";
	events[1941] = "Denis";
	printMap(events);
	cout << events[1950] << endl;
	events.erase(1941);
	printMap(events);
	BuildReversedMap(events);
	map<string, int> reversed_map = BuildReversedMap(events);
	cout << reversed_map["Bjarne"] << endl;
	printReversedMap(reversed_map);

}
