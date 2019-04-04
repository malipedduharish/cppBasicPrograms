//basic program for constant members in cpp
#include<iostream>
using namespace std;
class simpleInterest {
	float p;
	int t;
	const float r; // declaration of constant varibale and this should be intialized by constructor only
public:
	simpleInterest() :r(2.3){}
	void readData()
	{
		cout << "enter details of principle amount and time required" << endl;
		cin >> p;
		cin >> t;
	}
	float show()
	{
		float res;
		res=(p*t*r) / 100;
		cout<<"The simple intrest is"<< res;
		return 0;
	}
	};
int main()
{
	simpleInterest s1;
	s1.readData();
	s1.show();
	return 0;

}