// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;

void VectorPrint(vector<int> &a)
{
    for(const auto& i : a)
    {
        cout << i << " ";
    }
}

int main()
{
  vector<int> v  = {1, 2, 3, 4, 5};
  //VectorPrint(v);
  for(int i=0; i < v.size(); i++)
  {
      v[i]++;
  }
  
  for(auto &i: v)
  {
      i++;
  }
  
    VectorPrint(v);

  
}

