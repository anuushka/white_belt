#include<bits/stdc++.h>

using namespace std;
vector<int>Reversed(const vector<int>& v)
{
    vector<int> result;
    result.reserve(v.size());
    for(int i = v.size() - 1; i >= 0; i--)
    {
        result.push_back(v[i]);
    }
    return result;
}

int main()
{
	vector<int> numbers = {1, 5, 3, 4, 2};
    vector<int> reversed = Reversed(numbers);
    for (auto i : reversed) {
        cout << i << ' ';
    }
    return 0;
}
