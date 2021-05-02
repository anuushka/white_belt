#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, p;
	cin >> n;
	vector<bool> queue;
	string command;
	for(int i = 0; i < n; i++)
	{
		cin >> command;
		if(command == "WORRY_COUNT")
		{
			cout << count(queue.begin(), queue.end(), true) << endl;
		}
		else
		{
			cin >> p;
			if(command == "COME")
			{
				queue.resize(queue.size()+p, false);
			}
			else if(command == "WORRY")
			{
				queue[p] = true;
			}
			else if(command == "QUIET")
			{
				queue[p] = false;
			}
		}
	}	
}
