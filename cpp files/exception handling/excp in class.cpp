//program for exception handling in class 
#include<iostream>
using namespace std;
class Student {
public:
	Student()
	{
		cout << "this is student class constructor" << endl;
	}
	~Student()
	{
		cout << "this is student class destructor" << endl;
	}
	 };
int main()
{
	Student s;
	try {
		throw 0;
	}
	catch(...)
	{
		cout << "example of exceptions in class" << endl;
	}
}

// destructor is automatically call after throw block ..