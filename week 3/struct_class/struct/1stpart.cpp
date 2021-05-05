#include<iostream>
#include<vector>
#include <string>

using namespace std;

struct Lecture
{
	int duration;
	string title;
	string author;
};

void PrintLecture(const Lecture &lec)
{
	cout << lec.author << " " << lec.duration << " " << lec.title << endl;
}

void printStruct(vector<Lecture> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].duration << " " << v[i].title << " " << v[i].author << endl;
    }
}


int main()
{
	Lecture lec;
	lec.author = "Yandex";
	lec.duration = 30;
	lec.title = "C++";
	
	Lecture lec2 = {30, "C++ basics", "Anujin"};
	PrintLecture(lec);
	PrintLecture(lec2);

	
	vector<Lecture> lectures;
	lectures.push_back({30, "C++", "Yandex"});
	lectures.push_back({40, "C++", "MIPT"});
	lectures.push_back({50, "C++", "ITMO"});
	lectures.push_back({60, "C++", "HSE"});
	lectures.push_back({70, "C++", "Google"});
	lectures.push_back({80, "C++", "MSU"});

	printStruct(lectures);


}
