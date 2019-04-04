#include <iostream>
using namespace std;
class Test2; //forward declaration
class Test1{
  int a,b;
  public:
  friend class Test2;
  void getab()
  {
      cout<<"enter details of a and b"<<endl;
      cin>>a>>b;
  }
};
class Test2{
  public:
    void putab(Test1 t1)
    {
        cout<<"the values are"<<endl;
        cout<<"a is"<<t1.a<<endl;
        cout<<"b is"<<t1.b<<endl;
    }
    
};


int main()
{
    Test1 t1;
    Test2 t2;
    t1.getab();
    t2.putab(t1);
//   cout << "Hello World" << endl; 
   
   return 0;
}