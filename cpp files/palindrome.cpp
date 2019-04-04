//program for palindrome in cpp which works on any test case
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[10], brr[10],temp[10];
	cout << "enter a string" << endl;// if the string is in upper of lower case convert that to lowercase strlwr();
	cin >> arr;
	_strlwr_s(arr);
	cout << "string after converting to lower case is" << arr << endl;
	strcpy_s(temp, arr); //copyin arr to temp
	strcpy_s(brr, _strrev(temp)); //copyinr temp to brr
	cout << "the first string arr is " << arr << endl;
	cout << "the second string brr is " << brr << endl;
	if (strcmp(arr, brr)==0)
	{
		cout << "it is a palindrome" << endl;
	}
	else cout << "not a palindrome" << endl;
	return 0;
}