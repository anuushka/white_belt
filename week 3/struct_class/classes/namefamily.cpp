#include<iostream>
#include<map>
using namespace std;

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
  	first_names[year] = first_name;
  }
  void ChangeLastName(int year, const string& last_name) {
  	last_names[year] = last_name;
  }
  string GetFullName(int year) 
  {
  	string first_name;
  	string last_name;
	for(const auto& i: first_names)
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
	
	for(const auto& j: last_names)
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
			return last_name + " with unknown first name";
		}
		else if(last_name.empty())
		{
			return first_name + " with unknown last name";
		}
		else
		{
			return first_name + " " + last_name;
		}
  }
private:
	map<int, string> first_names;
	map<int, string> last_names;
};


int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  return 0;
}
