#include<stdio.h>
#define rows 2
#define cols 3
int main()
{
	int a[2][3]={10,20,30,40,50,60};
	int b[2][3]={{100,200,300},{400,500,600}};
	printf("%d\n",a[0][1]);//accessing 0 row 1 st column
	printf("%d\n",a[1][0]);
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("address of each element=a[%d][%d]=%p,value is=%d\n",i,j,&a[i][j],a[i][j]);
		}
	}
	printf(" base address of array=%p ,address of first element :%p\n",a,&a[0][0]);
}

