#include<iostream>
using namespace std;
class myClass {
public :
	int id;
	myClass() //Default constructor
	{
		cout<<"this is a default constructor"<<endl;
		id = -1;
	}
	myClass(int i) {
		cout << "this is from parameterized constructor" << endl;
		id=i;

	}
};
int main()
{
	myClass obj1;
	cout<<"my id is"<<obj1.id<<endl;
	myClass obj2(21);
	cout << "my idd is " << obj2.id << endl;
	//obj1.myClass(10);
	return 0;
}