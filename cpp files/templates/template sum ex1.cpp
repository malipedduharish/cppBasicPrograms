//program for demonstration of templates/generics in cpp
//Template/generics mean one function for several other functions
//program for usage of template to perform addition of several data type int float...etc
#include<iostream>
using namespace std;
template <class t>
t sum(t a, t b) {
	return a + b;
}
void main()
{
	cout << "integer sum is " << sum(2, 3) << endl;;
	cout << "float sum is " << sum(2.3, 2.3) << endl;;
}