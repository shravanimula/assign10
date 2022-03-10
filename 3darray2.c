#include<stdio.h>
int main()
{
	int a[2][3][2];
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("enter the array a[%d][%d][%d]:",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("array elements:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("a[%d][%d][%d]=%d\n",i,j,k,a[i][j][k]);
			}
		}
	}
	printf("first element array:a[0][0][0]=%d\n",a[0][0][0]);
	printf("middle element array:a[0][2][0]=%d\n",a[0][2][0]);
	printf("last element of array:a[1][2][1]=%d\n",a[1][2][1]);
}
