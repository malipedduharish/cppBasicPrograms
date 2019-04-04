#include<iostream>
using namespace std;
class Base {

public:
	Base()
	{
		cout << "constructor fired from base class" << endl;
	}
	};
class Derived : public Base {
public:
	Derived()
	{
		//Base::Base(); this statement is no needed as compiler automatically adds this statement when der extends base class
		cout << "constructor fired from derived class" << endl;
	}
};
int main()
{
	Derived d1;



	return 0;

}