#include<iostream>
using namespace std;

void TOH(int n, char a, char b, char c)
//  first all the disks are stacked on rod a
// we have to move entire stack to rod c such that smallest disc is placed on the top
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"move disc "<<n<<" from "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);

    }
}
int main()
{   int n;
    cin>>n;
    TOH(n,'a','b','c');
}

