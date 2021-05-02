#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
	int n;
	string command, country;
	map<string, string> country_capital;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> command;
		if(command == "CHANGE_CAPITAL")
		{
			string new_capital;
			cin >> country >> new_capital;
			if(country_capital.count(country) == 0)
			{
                cout << "Introduce new country " << country << " with capital " << new_capital << endl;
			}
			else
			{
				const string& old_capital = country_capital[country];
				if(old_capital == new_capital)
				{
          			cout << "Country " << country << " hasn't changed its capital" << endl;
				}
				else
				{
          			cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
				}
			}
			    country_capital[country] = new_capital;
		}
		else if(command == "RENAME")
		{
			string old_country_name, new_country_name;
			cin >> old_country_name >> new_country_name;
            if (old_country_name == new_country_name || country_capital.count(old_country_name) == 0 || country_capital.count(new_country_name) == 1) 
			{
				cout << "Incorrect rename, skip" << endl;
			}
			else
			{
				cout << "Country " << old_country_name << " with capital " << country_capital[old_country_name] << " has been renamed to " << new_country_name << endl;
				country_capital[new_country_name] = country_capital[old_country_name];
				country_capital.erase(old_country_name);
			}
		}
		else if(command == "ABOUT")
		{
			cin >> country;
			if(country_capital.count(country) == 0){
				cout << "Country " << country << " doesn't exist" << endl;
			}
			else
			{
				cout << "Country " << country << " has capital " << country_capital[country] << endl;			}
		}
		else if(command == "DUMP")
		{
			if(country_capital.size()== 0)
			{
        		cout << "There are no countries in the world" << endl;
			}
			else 
			{
				for (const auto& country_item : country_capital) {
          			cout << country_item.first << "/" << country_item.second << " ";
			}
			cout << endl;
		}
	}
	
    }
    
}
