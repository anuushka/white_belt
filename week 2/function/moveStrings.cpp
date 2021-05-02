#include <iostream>
#include <vector>
#include <algorithm>    
#include <utility> 
#include <string>
using namespace std;

void MoveStrings(vector<string> &vec1, vector<string> &vec2)
{
    for(auto i: vec1)
    {
        vec2.push_back(i);
    }
    vec1.clear();
}

int main()
{
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    for (auto k : destination) {
        cout << k << " ";
    }
    return 0;
}
