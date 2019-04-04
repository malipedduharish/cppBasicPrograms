// program for constant member functions
#include<iostream>
using namespace std;
class Test {
	int a, b;
public:
/*	void show()
	{
		a = 10;
		b = 20;

	}*/
	void show() const {
		int c = 30;
		cout << c;
	}


};
int main()
{
	Test t2;
	t2.show();




	return 0;

}