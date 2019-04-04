//program for local class demonstration
// a class which is declared in and function and all the object creation and calling of the function is done
// in that function..then it is called a local class
#include<iostream>
using namespace std;
int x = 200;
void fun()
{
	class Test
	{
		int x;
	public:
		void show()
		{
			int x = 10;
			cout << "local value of x is " << x << endl;
			cout << "global value of x is " << ::x << endl;
				}
			
	};
	Test t1;
	t1.show();
}
void main()
{
	fun();
}