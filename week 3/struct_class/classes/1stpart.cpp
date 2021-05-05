#include<iostream>
using namespace std;

int computeDistance(const string& sourse, const string& destination)
{
	return source.length() - destination.length();
}

class Route
{
	public:
		
		void setSource(const string& new_source)
		{
			source = new_source;
			updateLength();
		}
		
		void setDestination(const string& new_dest)
		{
			destination = new_dest;
			updateLength();
		}
		string getSource()
		{
			return source;
		}
		
		string getDest(){
			return destination;
		}
		
		int getLength()
		{
			return length;
		}
		
	private:
		string source;
		string destination;
		int length;
		void updateLength()
		{
			length = computeDistance(source, destination);
		}
}


it main()
{
	Route route;
	route.setSource("Moscow");
	route.setDestination("Saint-Petersburg");
	cout << route.getSource() << "to " << route.getDest() << "is" << route.getLength() << "meters long";
}
