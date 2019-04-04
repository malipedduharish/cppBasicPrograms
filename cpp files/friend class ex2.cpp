//program for demonstrating friend class 
#include<iostream>
using namespace std;
class Harish;
class Test {
	int a, b;
public:
	void getdata()

	{
		cout << "enter values of a and b" << endl;
		cin >> a >> b;
	}
	friend class Harish;
};
class Harish {
public:
	void putdetails(Test t1)
	{
		
		cout << "the details are" << endl;
		cout << t1.a << ends << t1.b << endl;
	}
};
int main()
{
	Test t1;
	Harish h1;
	t1.getdata();
	h1.putdetails(t1);
	   	 
	return 0;

}