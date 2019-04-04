//program for overloading template functions
#include<iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
	return a + b;
}
template <class t>
t sum(t a, t b, t c)
{
	return a + b + c;
}
int main()
{
	cout << "sum is " << sum(2, 3);
	cout << "sum is " << sum(2, 3,4);
}