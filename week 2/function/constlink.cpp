#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Person
{
	string name;
	string surname;
	int age;	
};

vector<Person> getMoscowPopulation();


void printPopulationSize(vector<Person> p)
{
	cout << "There are" << p.size() << "people in Moscow";
}

int main()
{
	vector<Person> people = getMoscowPopulation();
	printPopulationSize(people);
	return 0;
}
