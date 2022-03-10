#include<stdio.h>
int main()
{
	int a[2][3]={10,20,30,40,50,60};
	int b[2][3]={{100,200,300},{400,500,600}};
	printf("%d\n",a[0][1]);//accessing 0 row 1 st column
	printf("%d\n",a[1][0]);
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]=%d\n",i,j,b[i][j]);
		}
	}
	printf("first element of array:b[0][0]=%d\n",b[0][0]);
	printf("middle element of array:b[0][2]=%d\n",b[0][2]);
	printf("last element of array:b[1][2]=%d\n",b[1][2]);
}
