//program for demonstration of templates/generics in cpp
//Template/generics mean one function for several other functions
//template to perform diff operations on arrays
#include<iostream>
#include<cmath>
using namespace std;
template <class t>
t sum(t a[],int size) {
	int sum1 = 0;
	for (int i = 0; i < size; ++i)
	{
		sum1 =sum1+ a[i];
	}
	return sum1;
}
void main()
{
	int x[5] = { 2,3,4,5,6 };
	float y[2] = { 2.3,2.3 };
	cout << "int  sum of array is " << sum(x,5) << endl;
	cout << "float array sum is" << ceil(sum(y, 2)) << endl;
	
}