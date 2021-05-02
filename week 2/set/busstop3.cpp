#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	map<set<string>, int> buses;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string number;
		cin >> number;
		for(int i=0;i < number; i++)
		{
			string stop;
			set<string> stops;
			cin >> stop;
			stops.insert(stop);
		}
		if(buses.count(stops) == 0)
		{
			int new_number = buses.size()+1;
			buses[stops] = new_number;
			cout << "New bus " << new_number << endl;
		}
		else
		{
			cout << "Already exists for " << buses[stops] << endl;
		}
	}
}
