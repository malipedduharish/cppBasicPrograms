//cpp program for retrieving a particula data from a file
#include<iostream>
#include<fstream>
using namespace std;
class Student {
	int id;
	char name[20];
public:
	
	void enquiry();
	
};
void Student::enquiry()
{
	Student s;
	int idno,found=0;
	cout << "enter id no of the student to search for" << endl;
	cin >> idno;
	ifstream FILE("Student.data");
	FILE.read((char*)&s, sizeof(s));
	while (!FILE.eof())
	{
		if (s.id == idno)
		{
			cout << "id"<<ends<<"name"<< endl;
			cout << s.id << ends << s.name << endl;
			found = 1;
			break;
		}
		else cout << "student data with id number " << idno << " not found" << endl;
		break;
		FILE.read((char*)&s, sizeof(s));
	}
	FILE.close();
}

int main()
{
	Student s;
	s.enquiry();
	return 0;
}

