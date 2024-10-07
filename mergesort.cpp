#include <iostream>
 
using namespace std;
 
class Example
{
    static int Number;
    int n;
     
    public:
     
    void set()
	{
        n = Number + 1;
        Number = Number + 1;
    }
    
    void set1()
	{
        n = Number + 1;
        Number = Number + 1;
    }
    
    void show()
	{
        cout<<"Object 1: value of n = "<<n<<endl;
    }
    
    void show1()
	{
        cout<<"Object 2: value of n = "<<n<<endl;
        cout<<"Object 1: value of Number = "<< Number << endl;
    }
     
    static void showNumber()
	{         
        cout<<"Object 1: value of Number = "<< Number << endl;
    }
    
    static void showNumber1()
	{         
        cout<<"Object 2: value of Number = "<< Number << endl;
        //cout<<"Object 2: value of n = "<<n<<endl;
    }
     
     
};
 
int Example:: Number = 5;
 
int main()
{
    Example example1, example2;
    
    example1.set();
    example2.set1();
 
    example1.show();
    example2.show1();
     
    example1.showNumber();
    example2.showNumber1();
    
    //Example::showNumber();    //a static function can be called without creating an instance of the class
     
    return 0;
}
