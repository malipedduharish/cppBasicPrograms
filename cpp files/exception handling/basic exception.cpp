//program for exception handling in cpp
#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	//a = 6, b = 0;
	cout << "enter values of a and b" << endl;
	try {
		cin >> a >> b;
		c = a / b;

		if(b==0) throw 0;
		else cout << "div is" << c << endl;
	}
	catch (int x) {
		cout << x << "divided by zero is not possible" << endl;
	}
	return 0;
}