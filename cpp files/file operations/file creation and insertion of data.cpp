#include<iostream>
#include<fstream>
using namespace std;
class Student {
	int id;
	char name[20];
public:
	void getStudentDetails()
	{
		cout << "enter student details" << endl;
		cin >> id >> name;
	}
	 };
int main()
{
	Student s;
	ofstream File;
	File.open("Student.data");
	char op;
	do {
		s.getStudentDetails();
		File.write((char *)&s,sizeof(s));
		cout << "one row created successfully" << endl;
		cout << "Do u wish to enter another student details y or n" << endl;
		cin >> op;
	} while (op == 'y' || op == 'Y');

	return 0;
}