#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myfunction (int i,int j) { return (abs(i)<abs(j)); }


int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &e : v)
	{
	    cin >> e;
	}
	sort(begin(v), end(v), myfunction);
	
	for(auto i: v)
	{
	    cout << i << " ";
	}
}
