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

/* PrintLecture(const Lecture &lec)
{
	cout << lec.author << " " << lec.duration << " " << lec.title << endl;
}*/

void printCourse(const vector<Lecture> &v)
{
    for (const Lecture &lec : v)
    {
        cout << lec.author << " " << lec.duration << " " << lec.title << endl;
        //PrintLecture(lec);
    }
}


int main()
{
	vector<Lecture> lectures;
	lectures.push_back({30, "C++", "Yandex"});
	lectures.push_back({40, "C++", "MIPT"});
	lectures.push_back({50, "C++", "ITMO"});
	lectures.push_back({60, "C++", "HSE"});
	lectures.push_back({70, "C++", "Google"});
	lectures.push_back({80, "C++", "MSU"});
	printCourse(lectures);
}
