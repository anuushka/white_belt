#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string, vector<string> > bus_stop;
	map<string, vector<string> > stop_bus;
	int n;
	string command;
	for(int i=0; i < n; i++)
	{
		cin >> command;
		if(command == "NEW_BUS")
		{
			string bus;
			cin >> bus;
			int stop_count;
			cin >> stop_count;
			vector<string> &stops = bus_stop[bus];
			stops.resize(stop_count);
			for(auto &s: stops)
			{
				cin >> s;
				stop_bus[s].push_back(bus);
			}
		} 
		else if(command == "BUSES_FOR_STOP")
		{
			string stop_name;
			cin >> stop_name;
			if(stop_bus.count(stop_name) == 0)
			{
				cout << "No stop" << endl;
			}
			else
			{
				for(const auto b: stop_bus[stop_name])
				{
					cout << b << " ";
				}
				cout << endl;
			}
		}
		else if(command == "STOPS_FOR_BUS")
		{
			string bus;
			cin >> bus;
			if(bus_stop.count(bus) == 0)
			{
				cout << "No bus" << endl;
			}
			else
			{
				for(const auto &s: stop_bus[bus])
				{
					std::cout << "Stop " << s << ": ";
					if(stop_bus[s].size() == 0)
					{
						cout << "no interchange" << std::endl;
					}
					else
					{
						for(auto& other_buses: stop_bus[stop])
						{
							if(bus != other_buses)
							{
								cout << other_buses << " ";
							}
						}
						cout << endl;
					}
				}
				
			}
						
		}
		else if(command == "ALL_BUSES")
		{
			if(bus_stop.empty())
			{
				cout << "No buses" << endl;
			}
			else
			{
				for(auto& bus_item: bus_stop)
				{
					cout << "Bus" << bus_item.first << ":";
					for(auto& stop : stop_bus[bus_item])
					{
						cout << stop << " ";
					}
					cout << endl;
				}
			}
		}
	}
}

