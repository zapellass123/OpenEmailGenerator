#include <iostream>  
using namespace std;  
class A {  
public:  
    void final_print() // function that call display  
    {  
display();  
    }  
    void display() // the display function  
    {  
cout<< "Printing from the base class" <<endl;  
    }  
};  
class B : public A // B inherit a publicly  
{  
public:  
    void display() // B's display  
    {  
cout<< "Printing from the derived class" <<endl;  
    }  
};  
int main()  
{  
    A obj1; // Creating A's pbject  
    obj1.final_print(); // Calling final_print  
    B obj2; // calling b  
    obj2.final_print();  
    return 0;  
}  
