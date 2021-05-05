#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class ReversibleString
{
	private:
		string str;
	public:
		ReversibleString(){}
		ReversibleString(const string str_) 
		{
			str = str_;
		}
		void Reverse()
		{
			reverse(str.begin(), str.end());
		}
			
		string ToString() const
		{
			return str;
		}	
};

int main()
{
	ReversibleString s("live");
	s.Reverse();
	cout << s.ToString() << endl;
	  
	s.Reverse();
	const ReversibleString& s_ref = s;
	string tmp = s_ref.ToString();
	cout << tmp << endl;
	  
	ReversibleString empty;
	cout << '"' << empty.ToString() << '"' << endl;
  
  return 0;
}
