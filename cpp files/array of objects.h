// array of objects in cpp
#include<iostream>
using namespace std;
class Test {
	int id;
	char name[20];
public:
	void getdetails()
	{
		cout << "enter id and name of student followd by a space" << endl;
		cin >> id >> name;
	}
	void putdetails()
	{
		//cout << "the details of the students are";
		cout << id << ends << name << endl;
		
	}
};
int main()
{
	Test st[10];
	int count = 0;
	cout << "enter the count for number of students" << endl;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		st[i].getdetails();
	}
	cout << "the details of the students are"<<endl;
	cout << "id" << ends << "name" << endl;
	for (int i = 0; i < count; i++)
	{
		st[i].putdetails();
	}



	return 0;

}