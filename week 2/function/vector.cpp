#include<iostream>
#include<vector>
using namespace std;
void PrintVector(const vector<int> &vec)
{
	for(auto i : vec)
	{
		cout << i << " ";
	}
}

int main()
{
	vector<int> months = {30, 28, 30, 31};
	if(true)
	{
		months[1]++;
	}
	PrintVector(months);
	return 0;
}
