#include <iostream>
using namespace std;
class Test{

    public:
    static int a;
    void put(){
        cout<<"the value of a is "<<a<<endl;
    }
    };
    int Test::a=10;


int main()
{
    Test ::a=100;
    cout<<"the value of a is ...."<<Test::a<<endl;
    Test t1;
    t1.put();
   
   
   //cout << "Hello World" << endl; 
   
   return 0;
}