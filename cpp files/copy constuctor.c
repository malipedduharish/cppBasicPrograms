//program for copy constuctor
#include<iostream>
using namespace std;
class Test {
	int a, b;
public:
	Test(int a,int b)
	{
		this->a = a;
		this->b = b;

	}
	Test(Test &old)
	{
		a = old.a;
		b = old.b;
	}
	void display()
	{
		cout << a <<ends<< b << endl;
	}

};
int main()
{
	Test t1(10, 20);
	t1.display();
	Test t2(t1);
	t2.display();




	return 0;

}