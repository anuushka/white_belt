#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float D = pow(b,2) - 4 * a * c;
	cout << D << endl;
	if( D > 0)
	{
		if(a!= 0)
		{
			float x1 = (-b + sqrt(D))/(2*a);
			float x2 = (-b - sqrt(D))/(2*a);
			cout << x1 << " " << x2;
		}
		else
		{
			if(c*b < 0)
			{
				float x4 = c / b;
				cout << x4;
			}
			else
			{
				float x5 = -c / b;
				cout << x5;
			}
		}
		
	}
	else if(D==0)
	{
		float x3 = -b/(2*a);
		cout << x3;
	}
	
	return 0;
}
