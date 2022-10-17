#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter rows: ";
    cin >> rows;

    //Solid pyramid 
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
