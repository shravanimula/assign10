#include<stdio.h>
int main()
{
	int a[2][3][2]={{{10,20},{30,40},{50,60} },{ {100,200},{300,400},{500,600} }};
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("a[%d][%d][%d]=%d\t",i,j,k,a[i][j][k]);
			}
		}
	}
	printf("\nfirst element of array:a[0][0][0]=%d\n",a[0][0][0]);
	printf("middle element of array:a[0][1][1]=%d\n",a[0][1][1]);
	printf("last elemet of array:a[1][2][1]=%d\n",a[1][2][1]);
}
