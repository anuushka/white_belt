#include<iostream>
#include<algorithm>
using namespace std;

void Print(vector<int> &v, string name)
{
    cout << name << ": ";
	for(auto i: v)
	{
		cout << i << " ";
	}
}

int main()
{
	cout << "min: " << min(2, 3) << endl;
	cout << "max: " << max(2, 3) << endl;
	
	vector<int> v = {1, 2, 3, 4};
	sort(begin(v), end(v));
	Print(v, "sorted");
}
