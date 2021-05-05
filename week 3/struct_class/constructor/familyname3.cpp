#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Person
{
	private:
		map<int, string> first_names;
		map<int, string> last_names;
		int birthday;
	public:
		Person(const string& first_name_, const string& last_name_, const int& year)
		{
			first_names[year] = first_name_;
			last_names[year] = last_name_;
			birthday = year;
		}
		void ChangeFirstName(int year, const string& first_name)
		{
			if(year >= birthday)
			{
				first_names[year] = first_name;
			}
		}
		void ChangeLastName(int year, const string& last_name)
		{
			if(year >= birthday)
			{
				last_names[year] = last_name;
			}
		}
		
		string PrintVectorUni(const vector<string>& v) {
	        if (v.empty()) {
	            return "";
	        }
	        string prev;
	        string output = " (";
	        output += v[v.size() - 1];
	        for (int i = v.size() - 2; i >= 0; i--) {
	            output += ", " + v[i];
	        }
	        output += ")";
	        return output;
   		}
   		
		string GetFullName(int year)
		{
			string first_name;
			string last_name;
			
			if(year < birthday)
			{
				return "No person";
			}
			for(const auto &i: first_names)
			{
				if(year >= i.first)
				{
					first_name = i.second;
				}
				else
				{
					break;
				}
			}
			for(const auto &j : last_names)
			{
				if(year >= j.first)
				{
					last_name = j.second;
				}
				else
				{
					break;
				}
			}
			
			if(first_name.empty() && last_name.empty())
			{
				return "Incognito";
			}
			else if(first_name.empty())
			{
				return last_name + " with unknown last name";
			}
			else if(last_name.empty())
			{
				return first_name + " with unknown first name";
			}
			else
			{
				return first_name + last_name;
			}
		}
		string GetFullNameWithHistory(int year)
		{
			string first_name;
			string last_name;
			vector<string> first_name_history;
			vector<string> last_name_history;
			if(year < birthday)
			{
				return "No person";
			}
			for(const auto &i : first_names)
			{
				if(year >= i.first)
				{
					if(!first_name.empty() && first_name != i.second)
					{
						first_name_history.push_back(first_name);
					}
					first_name = i.second;
				}
				else
				{
					break;
				}	
			}
			
			for(const auto &j : last_names)
			{
				if(year >= j.first)
				{
					if(!last_name.empty() && last_name != j.second)
					{
						last_name_history.push_back(last_name);
					}
					last_name = j.second;
				}
				else
				{
					break;
				}
			}
			
			if (first_name.empty() && last_name.empty()) {
		            return "Incognito";
		        } else if (first_name.empty()) {
		            return last_name + PrintVectorUni(last_name_history) + " with unknown first name";
		        } else if (last_name.empty()) {
		            return first_name + PrintVectorUni(first_name_history) + " with unknown last name";
		        } else {
		            return first_name + PrintVectorUni(first_name_history) + " " + last_name + PrintVectorUni(last_name_history);
		        }
			
		}
};

int main()
{
	Person person("Polina", "Sergeeva", 1960);
	for (int year : {1959, 1960}) {
		cout << person.GetFullNameWithHistory(year) << endl;
	}
	  
	person.ChangeFirstName(1965, "Appolinaria");
	person.ChangeLastName(1967, "Ivanova");
	for (int year : {1965, 1967}) {
	    cout << person.GetFullNameWithHistory(year) << endl;
	}
}
