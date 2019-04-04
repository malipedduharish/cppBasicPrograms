#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,k,arr[10];
	cout<<"enter the values for the array"<<endl;
	i=1;
	while(i<=10)
	{
		cin>>arr[i];
		
		i++;
	}//while(i<=10);
		
		cout<<"array before sorting is "<<endl;
		for(i=1;i<=10;i++)
		{
		cout<<arr[i] <<endl;
		
		}
	sort(arr,arr+11);
	cout<<"array after sorting is "<<endl;
	for(k=0;k<10;k++)
		{
		cout<<arr[k]<<endl;
		
		}

return 0;
}