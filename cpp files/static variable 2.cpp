#include <iostream>
using namespace std;
class Test{
   
    public:
     static int a;
    Test()
    {
        a++;
        cout<<a<<"obj is created"<<endl;
    }
    ~Test()
    {
        cout<<a<<"obj is destroyed"<<endl;
        a--;
        
    }
    };
    int Test::a;


int main()
{
    Test t1,t2,t3;
   
   
   //cout << "Hello World" << endl; 
   
   return 0;
}
// when static is not used we will get some garbage values .. But when static is used we will get the output asctime
/*1obj is created
2obj is created
3obj is created
3obj is destroyed
2obj is destroyed
1obj is destroyed

the destructor is destroyed from right to left;
*/
// A copy of the variable ""a"" is maintained throughout the program .. more over shared by all the objects;