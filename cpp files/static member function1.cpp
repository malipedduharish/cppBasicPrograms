#include <iostream>
using namespace std;
class Test{
   
    public:
    static void big(int x,int y)
    {
        if(x>y)
        cout<<x<<"is big"<<endl;
        else if(x<y)
        cout<<y<<"is big"<<endl;
        else cout<<"Both are equal";
        
    }
    
};


int main()
{
   // Test t1,t2,t3;
   Test t1; // static member function can be accessed by both object and class name;
   t1.big(10,2);
   Test::big(2,3);
   
   return 0;
}
