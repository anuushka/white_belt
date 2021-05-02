#include<iostream>
using namespace std;

int Factorial(int num)
{
	if (num < 0)
	{
		return 1;
	}
	else
	{
		int factorial = 1;
		for(int i = 2; i <= num; i++)
		{
			factorial = factorial * i;
		}
		return factorial;
	}
	
}
int main()
{
	int num;
	cin >> num;
	cout << Factorial(num);
}
