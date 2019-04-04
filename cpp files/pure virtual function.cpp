//program for pure virtual functiom and abstract bse class
#include<iostream>
using namespace std;
class Shape{  //shape is abstract as it contains only pure virtual function
	protected:
	float d1, d2;
public:
	void getdim()
	{
		cout << "enter dimension " << endl;
		cin >> d1 >> d2;
	}
	virtual float area() = 0; //this is pure virtual function as it is defined and intialized with 0
};
class Triangle :public Shape {
public:
	float area() // usage of virtual function..
	{
		return 0.5*d1*d2;
	}
};
class Rect :public Shape {
public:
	float area()
	{
		return d1 * d2;
	}
};
int main()
{
	Triangle t1;
	Rect r1;
	t1.getdim();
	cout << "area of triangle is" << t1.area() << endl;
	r1.getdim();
	cout << "area of rectangle is" << r1.area() << endl;	
	
	return 0;
}
