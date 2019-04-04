//another example for friend function biggest among two variables using friend concept
#include<iostream>
using namespace std;
class Test2;
class Test1 {
	int a;
public:
	void geta() {
		cout << "enter a value" << endl;
		cin >> a;

	}
	friend void big(Test1, Test2);
};
class Test2 {
	int b;
public:
	void getb() {
		cout << "enter b" << endl;
		cin >> b;

	}
	friend void big(Test1, Test2);
};
void big(Test1 t1, Test2 t2)
{
	if (t1.a > t2.b)
	{
		cout << "a is big" << endl;
	}
	else if (t1.a < t2.b)
	{
		cout << "b is big" << endl;
	}
	else cout << "both are equal";
}
int main()
{
	Test1 t1;
	t1.geta();
	Test2 t2;
	t2.getb();
	big(t1, t2);
	   	 
	return 0;

}