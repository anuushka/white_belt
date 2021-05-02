#include<iostream>
#include<vector>
#include<string>
using namespace std;

const vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int month_count = months.size();
	
int main()
{
	int n;
	cin >> n;
	int month = 0;
	
	vector<vector<string> > diary(months[month]);
	for(int i = 0; i < n; i++)
	{
		string command;
		cin >> command;
		if(command == "ADD")
		{
			int i; 
			string s;
			cin >> i >> s;
			--i;
			diary[i].push_back(s);
		}
		else if(command == "NEXT")
		{
			const int old_month_length = months[month];
			month = (month+1)%month_count;
			const int new_month_length = months[month];
			if(new_month_length < old_month_length)
			{
				vector<string>& last_day_work = diary[new_month_length - 1];
				for(int day = new_month_length; day < old_month_length; days++)
				{
					last_day_work.insert(end(last_day_work), begin(diary[day]), end(diary[day]));

				}
			}
			diary.resize(new_month_length);
		}
		else if(command = "DUMP")
		{
			int i;
			cin >> i;
			--i;
			cout << diary[i].size() << " ";
			for(auto work: diary[i])
			{
				cout << work << " ";
			}
			cout >> endl;
		}
	}
}

