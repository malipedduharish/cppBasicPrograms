//program for demonstration of templates/generics in cpp
//Template/generics mean one function for several other functions
//program for usage of template to perform addition of several data type int float... 
//and to pass different arguements to same functions
#include<iostream>
using namespace std;
template <class t1,class t2>
float sum(t1 a, t2 b) {
	return a + b;
}
void main()
{
	cout << "integer sum is " << sum(2, 3) << endl;;
	cout << " sum is " << sum(2.3, 2.3) << endl;
	cout << "sum is " << sum(2, 2.3) << endl;
	cout << "float sum is " << sum(8.9, 2.3) << endl;
	cout << "float sum is " << sum(2.3, 2.3) << endl;
}