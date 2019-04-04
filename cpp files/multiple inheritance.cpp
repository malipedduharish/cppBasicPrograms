//program for demonstrating multiple inheritance

#include<iostream>
using namespace std;
class Student {
	int id;
	char name[20];
public:
	void getsdetails() {
		cout << "enter id and name of student" << endl;
		cin >> id >> name;
	}
	void putsdetails() {
		cout << "the details of the student are" << endl;
		cout << id << ends << name << endl;
	}
};
class Marks {
protected:
	int m1, m2, m3;
public:
	void getmarks() {
		cout << "enter the marks of student in all the three subjects" << endl;
		cin >> m1 >> m2 >> m3;
	}
	void showmarks()
	{
		cout << "the marks obtained by student are" << endl;
		cout << m1 << ends << m2 << ends << m3 << endl;
	}
		
};
class Result : public Student, public Marks {
public:
	void result()
	{
		float res;
		res = (m1 + m2 + m3) / 3.0;
		cout << "average marks in three subjects is" << res << endl;
	}
	};
int main()
{
	Result r1;
	r1.getsdetails();
	r1.getmarks();
	r1.putsdetails();
	r1.showmarks();
	r1.result();

}