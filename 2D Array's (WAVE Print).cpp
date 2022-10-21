 #include <bits/stdc++.h>
using namespace std;


void wavePrint(int **input, int nRows, int mCols)
{    
     
     if(nRows==0){
         return;
     }
     
     int d=2;
    for(int j=0;j<mCols;j++){
        if(j%d==0){
            for(int i=0;i<nRows;i++){
                cout << input[i][j] << " ";
            }
			 
        }else{
                for(int i=nRows-1;i>=0 ;i--){
                    cout << input[i][j] << " ";
                }
            }
            
          
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}


// here below i have given some samples of input to check the quality of code


// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.
// Output format :
// For each test case, print the elements of the two-dimensional array/list in the sine wave order in a single line, separated by a single space.

// Output for every test case will be printed in a seperate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1sec
// Sample Input 1:
// 1
// 3 4 
// 1  2  3  4 
// 5  6  7  8 
// 9 10 11 12
// Sample Output 1:
// 1 5 9 10 6 2 3 7 11 12 8 4
// Sample Input 2:
// 2
// 5 3 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// 10 11 12 
// 13 14 15
// 3 3
// 10 20 30 
// 40 50 60
// 70 80 90
// Sample Output 2:
// 1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 
// 10 40 70 80 50 20 30 60 90 
