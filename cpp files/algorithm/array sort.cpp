//program to work on sorting in algoritm

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[10] = { 4,3,2,5,1,6,4,2,6,2 };
	int length = sizeof(arr) / arr[0];
	cout << "array before sorting" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
		cout << ends;
	}
	cout << endl;
	cout << "array after sorting is" << endl; // for descending order add third parameter as greater<int>() ..
		sort(arr, arr + length);
	for (int i = 0; i < length; i++)
	{
		cout << ends;
		cout << arr[i];
	}

	
	return 0;
}