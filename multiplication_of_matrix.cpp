//multiplication of 2 matrix 

#include<iostream>
using namespace std;
int main()
{
    int mr1,mc1,mr2,mc2,m1[5][5],m2[5][5],result[5][5]={};
    cout<<"\nEnter the no. row 1st matrix:";
    cin>>mr1;
    cout<<"Enter the no. of coloum 1st matrix:";
    cin>>mc1;

    cout<<"\nEnter the no. row 2nd matrix:";
    cin>>mr2;
    cout<<"Enter the no. coloum 2nd matrix:";
    cin>>mc2;

    cout<<"\nEnter the element of 1st matrix:";

    for (int i = 1 ; i <= mr1 ; i++)
    {
        for (int j = 1 ; j <= mr1 ; j++)
        {
            cout<<"\nm1["<<i<<"]["<<j<<"]:";
            cin>>m1[i][j];
        }
        
    }

    cout<<"\nEnter the element of 2nd matrix:";

    for (int i = 1 ; i <= mr2 ; i++)
    {
        for (int j = 1 ; j <= mr2 ; j++)
        {
            cout<<"\nm2["<<i<<"]["<<j<<"]:";
            cin>>m2[i][j];
        }
        
    }

        if (mc1 == mr2)
        {
            for (int i = 1 ; i <= mc1 ; i++)              
            {
                for (int j = 1; j <= mr1; j++)         
                {
                    for (int k = 1; k <= mr1 ; k++)
                    {
                        result[i][j]=result[i][j]+m1[k][j]*m2[i][k];
                    }
                }
            }
            
        }
        else
        { 
            cout<<"\nMultiplication cannot be performed!!!";
        }
            cout<<"Multiplication is:";
            for (int i = 1; i <= mr1; i++)   
            {
                for (int j = 1; j <= mr1; j++)
                {
                    cout<<result[i][j]<<"   ";
                    
                }
            }

    
    return 0;
}
