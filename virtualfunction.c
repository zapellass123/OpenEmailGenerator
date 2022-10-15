#include <iostream>  
using namespace std;  
class A  
{  
   int x=5;  
    public:  
    void display()  
    {  
        std::cout << "Value of x is : " << x<<std::endl;  
    }  
};  
class B: public A  
{  
    int y = 10;  
    public:  
    void display()  
    {  
        std::cout << "Value of y is : " <<y<< std::endl;  
    }  
};  
int main()  
{  
    A *a;  
    B b;  
    a = &b;  
   a->display();  
    return 0;  
}  
