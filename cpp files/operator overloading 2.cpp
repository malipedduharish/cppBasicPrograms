#include <iostream>
using namespace std;
//overloading insertion and extraction operator
class Student{
    int idno;
    char name[200];
    public:
    friend void operator >>(istream &in,Student &s) 
    {
        in>>s.idno>>s.name;
    }
    friend void operator <<(ostream &out,Student &s)
    {
        out<<"id number is"<<s.idno<<endl<<" name of student is"<<s.name<<endl;
    }
};
int main()
{
 Student s;
 cin>>s;
 cout<<s;
   
   return 0;
}
