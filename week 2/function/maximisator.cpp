#include<iostream>

using namespace std;

void UpdateIfGreater(int& a, int& b) {
    if (a > b) {
    	int tmp = a;
        a = b;
        b = tmp;
    }
}

int main()
{
	int a, b;
	cin >> a >> b;
	UpdateIfGreater(a, b);
	cout << a << " " << b;
}
