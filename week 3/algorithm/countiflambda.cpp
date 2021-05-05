#include<iostream>
#include<algorithm>
using namespace std;

bool GT(int a)
{
    if(a > 2)
    {
        return true;
    }
    return false;
}

int main()
{	
	vector<int> v = {1, 2, 3, 4, 5};
	cout << count(begin(v), end(v), 2) << endl;
	
	int thru;
    cin >> thru;
	cout << count_if(begin(v), end(v), [thru](int x)
	{
	    if(x>thru)
	    {
	        return true;
	    }
	    return false;
	});
}
