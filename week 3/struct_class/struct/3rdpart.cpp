#include<iostream>
using namespace std;

struct LectureTitle
{
	string specialization;
	string course;
	string week;
};

struct DetailedLecture
{
	LectureTitle title;
	int duration;
};

int main()
{
	LectureTitle lect = {"Programming", "C++", "Week 3"};
	DetailedLecture lecture1 = {lect, 30};
	DetailedLecture lecture2 = {"Programming", "C++", "Week 3", 30};
	cout << lecture2.title.specialization << '\n';

}
