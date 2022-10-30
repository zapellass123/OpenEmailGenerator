#include<stdio.h>
int main()
{
	int m,n,c,d,a[10][10],count=0;
	printf(" enter the number of rows and columns:\n");
	scanf("%d%d",&m,&n);
	printf("enter the element the matrix:\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	printf("elements are:\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			if(a[c][d]==0)
			count++;
		}
	}
	if(count>((m*n)/2))
	{
		printf("sparse matrix");
	}
	else 
	{
		printf("not a sparse matrix");
	}
	return 0;
}
