#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<vector<string>, size_t> buses;
	string stop;
	for(int i=0; i < n; i++)
	{
		int count = 0;
		cin >> count;
		vector<string> stops;
		for(int i = 0; i < count; i++)
		{
			cin >> stop;
			stops.push_back(stop);
		}
		if(buses.count(stops) == 0)
		{
			int new_value = buses.size() + 1;
			buses[stops] = new_value;
			cout << "New bus " << new_value << endl;
		}
		else
		{
			cout << "Already exists for " << buses[stops] << endl;
		}
	}
	return 0;
}
