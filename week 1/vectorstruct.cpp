// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person
  {
    string name;
    string surname;
    int age;
  };
  
int main()
{
  vector<Person> staff;
  staff.push_back({"Ivan", "Ivanov", 25});
  staff.push_back({"Peter", "Petrov", 20});
  cout << staff[0].name << staff[0].surname << staff[0].age << endl;
  cout << staff[1].name << staff[1].surname << staff[1].age << endl;

  
}
