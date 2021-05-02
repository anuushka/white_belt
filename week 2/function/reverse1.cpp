#include<bits/stdc++.h>

using namespace std;
void reversestring(vector<int>& v)
{
	reverse(v.begin(),v.end());
}

int main()
{
	vector<int> vec;
	int n, a;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
	    cin >> a;
	    vec.push_back(a);
	}
	reversestring(vec);
	for(const auto& i : vec)
	    cout << i << " ";
}
