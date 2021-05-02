#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, temp, sum, avg;
	cin >> n;
	vector<int> tmp;
	vector<int> result;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        tmp.push_back(temp);
        sum += temp;
    }
    avg = sum / n;
    
    for(int i = 0; i < n; i++)
    {
    	if(tmp[i] > avg)
    	{
    		result.push_back(i);
		}
	}
	
	cout << result.size() << "\n";
	
	for(int i : result)
	{
		cout << i << " ";
	}
	  cout << endl;
	  
	return 0;
}
