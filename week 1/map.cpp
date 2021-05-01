// Example program
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  map<string, int> mp = {{"one", 1}, {"two", 2}, {"three", 3}};
  cout << "two is " << mp["two"] << endl;
  mp.at("two") = 3;
  cout << mp.at("two");
}
