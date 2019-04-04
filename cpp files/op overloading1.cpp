//program for operator overloading
//overloading == operator ...
#include<iostream>
using namespace std;
class Test {
	int a;
public:
	void geta()
	{
		cout << "enter a value" << endl;
		cin >> a;

	}
	void operator ==(Test t2)
	{
		if (a == t2.a)
			cout << "both are equal " << endl;
		else cout << "not equal" <<endl;

	}

};
int main()
{
	Test t1, t2;
	t1.geta();
	t2.geta();
	t1 == t2;
	   	  
return 0;

}