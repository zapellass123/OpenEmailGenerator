#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cout <<"Enter the number : ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        cout << "Given number is Palindrome.";
    else
        cout << "Given number is not Palindrome.";
    return 0;
}
