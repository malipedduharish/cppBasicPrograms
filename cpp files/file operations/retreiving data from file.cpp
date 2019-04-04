//cpp program for retrieving data from a file
#include<iostream>
#include<fstream>
using namespace std;
class Student {
	int id;
	char name[20];
public:
	void putStudent()
	{
		cout << "the details of the stdudent are" << endl;
		cout << id << ends << name << endl;
	}
};
int main()
{
	Student s;
	ifstream FILE("Student.data");
	FILE.read((char*)&s, sizeof(s));
	while (!FILE.eof())
	{
		s.putStudent();
		FILE.read((char*)&s, sizeof(s));
	}
	FILE.close();
	return 0;
}