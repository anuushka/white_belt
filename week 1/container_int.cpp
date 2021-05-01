// Example program
#include <iostream>
#include <string>
#include<vector>
#include <map>
using namespace std;

int main()
{
  vector<int> s = {1,2,3,4,5};
  int count = 0;
  for(auto c : s)
  {
      if(c == 5)
      {
          count++;
      }
  }
  cout << "There are " << count << " fives";
}
