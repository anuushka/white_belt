#include<iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  'f')
        {
            count++;
            if(count == 2)
        	{
        		cout << i;
			}
        }
        
    }
	if(count == 0)
	{
		cout << "-2";
	}
	else if(count == 1)  
	{
		cout << "-1";
	}  
}
