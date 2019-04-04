//program for searching using bsearch in algorithm ..
//program for seraching using bsearch in algorithm
#include<iostream>
#include<algorithm>
using namespace std;
void show(int arr[], int Alength)
{
	for (int i = 0; i < Alength; ++i)
	{
		cout << arr[i] << ends;
	}
}
int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int Alength = sizeof(arr) / sizeof(arr[0]);
	cout << "array before sorting is " << endl;
	show(arr, Alength);
	cout << "enter key value to be found" << endl;
	int key;
	cin >> key;
	cout << "sorting the array prior to searching for the key" << endl;
	sort(arr, arr + Alength);
	show(arr, Alength);
	cout << "searching for key value" << endl;
	if (binary_search(arr, arr + 10, key))
	{
		cout << "key is found";
	}
	else cout << "key not found";





	//syntax is binary_search(start addr,end addr,keyValue to be found);
	return 0;
}