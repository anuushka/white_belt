#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	for(a; a <= b; a++)
	{
		if(a%2==0)
		{
			cout << a << " ";
		}
	}
}
