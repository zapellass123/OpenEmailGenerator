#include<stdio.h>
int count=0;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int *array,int size,int left,int right)
{
    count=count+1;
    int location=right;
    if(size>1)
    {
        for(int i=left;i<=right;i++)
            {
            if(array[right]<array[i])
                {
                for(int j=i;j<right;j++)
                    {
                    swap(&array[j],&array[j+1]);
                    location--;
                    }
                }
            }
    }
}
void main()
{
    int no;
    printf("Enter the number of elements in the array:");
    scanf("%d/n",&no);
    int a[no],i;
    for(i=0;i<no;i++)
    {
        printf("Enter the %d Element:",i+1);
        scanf("%d",&a[i]);
    }
    quicksort(a,no,0,no-1);
    for(i=0;i<no;i++)
    {
        printf("%d ",a[i]);
    }
}