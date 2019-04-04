// program for virtual destructor
#include<iostream>
using namespace std;
class Base {
public:
	Base()
	{
		cout << "Iam from base constructor" << endl;
	}
	virtual ~Base() // by using virtual beside base destructor then only it will bind with derived destructor
	{
		cout << "Iam from base destructor" << endl;
	}


};
class Derived:public Base {
public:
	Derived()
	{
		cout << "Iam from Derived constructor" << endl;
	}
	~Derived()
	{
		cout << "Iam from Derived destructor" << endl;
	}


};

int main()
{
	Base *b = new Derived;
	delete b;
	return 0;

}