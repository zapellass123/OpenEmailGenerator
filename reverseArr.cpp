#include<iostream>
using namespace std;

int main()
{
    int n,i;
    
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    
    int arr[n];
    
    //Entering the elements of array
    cout<<"Enter "<<n<<" Array Elements: ";
    
    for(i=0; i<10; i++){
        cin>>arr[i];
    }
    
    //Printing the elements of array
    cout<<"\nThe Original Array is:\n";
    
    for(i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    
    //Reversing the Array
    cout<<"\n\nThe Reverse of Given Array is:\n";
    
    for(i=(10-1); i>=0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}
