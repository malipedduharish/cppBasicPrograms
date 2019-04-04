//program for passing return type as class 
#include<iostream>
using namespace std;
class Test {
private:
	int a, b;
public:
	void getdata();
	void putdata();
	Test sum(Test);
	   	 };

void Test::getdata()
{
	cout << "enter the data for the variables" << endl;
	cin >> a >> b;
}
void Test::putdata()
{
	cout << "the values of a and b are  " << a << ends << b;
}
Test Test::sum(Test t2)
{
	Test t3;
	t3.a = a + t2.a;
	t3.b = b + t2.b;
	return t3;
}
int main()
{
	Test t1, t2, t3;
	t1.getdata();
	t2.getdata();
	t3 = t1.sum(t2);
	t1.putdata();
	t2.putdata();
	cout << "the value of the object t3 is " << endl;
	t3.putdata();
	return 0;
}



