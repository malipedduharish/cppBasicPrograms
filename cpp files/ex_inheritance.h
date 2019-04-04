#include<iostream>
using namespace std;
class Ventures
{
	int area;
public:
	void set_area(int n);
	int get_area();
};
class House : public Ventures {
	int bedrooms;
	int baths;
public:
	void set_bedrooms(int n);
	int get_bedrooms();
	void set_baths(int n);
	int get_baths();
};
class School : public Ventures {
	int classrooms;
public:
	void set_classrooms(int n);
	int get_classrooms();
};
void Ventures::set_area(int n)
{
	area = n;
}
int Ventures::get_area()
{
	return area;
}
void House::set_bedrooms(int n)
{
	bedrooms = n;
}
int House::get_bedrooms()
{
	return bedrooms;
}
void House::set_baths(int n)
{
	baths = n;
}
int House::get_baths()
{
	return baths;
}
void School::set_classrooms(int n)
{
	classrooms = n;

}
int School::get_classrooms()
{
	return classrooms;
}



int main()
{
	House h1;
	School s1;
	h1.set_area(100);
	h1.set_bedrooms(20);
	h1.set_baths(15);
	s1.set_area(200);
	

	cout << "area of house is" <<h1.get_area() << endl;
	cout << "house has " << h1.get_bedrooms()<<" bedrooms"<< endl;
	cout << "house has " << h1.get_baths() <<"baths" << endl;
	//cout << "" << << endl;
	//cout << "" << << endl;
	//cout << "" << << endl;

	//cout << "" << << endl;



	return 0;
}