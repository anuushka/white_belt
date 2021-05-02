#include<iostream>
#include<vector>
#include <algorithm>    
#include <utility> 
#include<string>
using namespace std;

int main()
{
	std::vector<std::string> vec1 {"a","b","c","d"};
    std::vector<std::string> vec2 {"z"};
    vec2.resize(4);
    std :: move (vec1.begin(), vec1.begin() + 3, vec2.begin()+1);
    vec1.clear();      
    for(auto i: vec2)
        std :: cout << " " << i;  
}
