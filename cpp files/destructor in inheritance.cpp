// program for destructor in cpp
#include<iostream>
using namespace std;
class Base {
public:
	~Base()
	{
		cout << "fired from base destructor" << endl;
	}


};
class Child :public Base {
public:
	~Child() {
		cout << "fired from child destructor" << endl;
		// here the compiler automatically adds the base destructor Base::~Base()
	}
	};
int main()
{
	Child c1;

}