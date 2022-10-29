// CPP Program to print trinomial triangle.
#include<bits/stdc++.h>
using namespace std;

// Function to find the trinomial triangle value.
int TrinomialValue(int n, int k)
{
	// base case
	if (n == 0 && k == 0)
		return 1;
		
	// base case
	if(k < -n || k > n)
		return 0;
		
	// recursive step.
	return TrinomialValue (n - 1, k - 1)
		+ TrinomialValue (n - 1, k)
		+ TrinomialValue (n - 1, k + 1);
}

// Function to print Trinomial Triangle of height n.
void printTrinomial(int n)
{
	// printing n rows.
	for (int i = 0; i < n; i++)
	{
		// printing first half of triangle
		for (int j = -i; j <= 0; j++)
			cout << TrinomialValue(i, j) << " ";
			
		// printing second half of triangle.
		for (int j = 1; j <= i; j++)
			cout << TrinomialValue(i, j) << " ";
		
		cout << endl;
	}
}

// Driven Program
int main()
{
	int n = 4;

	printTrinomial(n);
	return 0;
}
