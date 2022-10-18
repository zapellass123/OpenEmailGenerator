//fibonacci search work on sorted array
#include<iostream>
using namespace std;
void fill(int a[],int n)
{
    cout<<"\n enter first element : ";
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cout<<"\n enter next element : ";
        cin>>a[i];
        if(a[i]<a[i-1])
        {
            cout<<"\n array is not sorted !!!!\t enter element greater than "<<a[i-1];  i--;
        }
    }

}
void display(int a[],int n)
{
    cout<<"\n array is : ";
    for(int i=0;i<n;i++) 
    {
        cout<<a[i]<<"\t";
    }
}
int fibonacci(int a[],int n,int key)
{
    int fib1=1;
    int fib2=0;
    int fib=fib1+fib2;
    while(fib<n)
    {
        fib2=fib1;
        fib1=fib;
        fib=fib1+fib2;
    }
    int offset=-1;
    while(fib>1)
    {
       int i=min(offset+fib2,n-1);
       if(a[i]<key)
       {
           fib=fib1;
           fib1=fib2;
           fib2=fib-fib1;
           offset=i;
       }
       else if(a[i]>key)
       {
           fib=fib2;
           fib1=fib1-fib2;
           fib2=fib-fib1;
       }
       else
            return i;
    }
    if(fib1 && offset+1==key)
    return offset+1;

    return -1;
}


int main()
{
    int n,key;
    cout<<"\n enter size of array : ";
    cin>>n;
    int a[n];
    fill(a,n);
    display(a,n);
    cout<<"\n enter element to be searched :";
    cin>>key;
    int r=fibonacci(a,n,key);
    if(r==-1)
    cout<<"\n element not found ";
    else
    cout<<"\n element found at "<<r+1<<" position";

    return 0;
}