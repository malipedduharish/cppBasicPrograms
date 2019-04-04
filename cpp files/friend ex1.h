//basic program for friend function
#include<iostream>
using namespace std;
class Test{
	int a,b;
	friend void putdata(Test);
	
};
void putdata(Test t)
{
	t.a=10;
	t.b=20;
	cout<<a<<ends<<b<<endl;
}
int main()
{
	Test t;
		putdata(t);
	
	
	return 0;
	
}