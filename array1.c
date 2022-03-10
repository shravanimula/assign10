#include<stdio.h>
int main()
{
	int a[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the array a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf(" array elements are:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\nfirst element of array:a[0][0]=%d\n",a[0][0]);
	printf("middle element of array:a[0][2]=%d\n",a[0][2]);
	printf("last element of array:a[1][2]=%d\n",a[1][2]);	
}
