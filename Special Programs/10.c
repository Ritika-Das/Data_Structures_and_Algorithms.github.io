#include<stdio.h>
void MultiMatrix(int (*a)[100],int (*b)[100],int (*c)[100],int r1,int c2,int r2)
{
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			*(*(c+i)+j)=0;		
			for(k=0;k<r2;k++)
			{				
				*(*(c+i)+j)=*(*(c+i)+j)+(*(*(a+i)+k) * (*(*(b+k)+j)));
			}
		}
	}

}
		
int main()
{
	int A[100][100],B[100][100],C[100][100];
	int i,j,r1,r2,c1,c2;
	printf("Enter the row of 1st matrix ");
	scanf("%d",&r1);
	printf("Enter the column of 1st matrix ");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter the number ");
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the row of 2nd matrix ");
	scanf("%d",&r2);
	printf("Enter the column of 2nd matrix ");
	scanf("%d",&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter the number ");
			scanf("%d",&B[i][j]);
		}
	}
	if(c1==r2)
	{
		MultiMatrix(A,B,C,r1,c2,r2);
		printf("After multiplication :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",C[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix multiplication not possible.");
	}	
	return 0;
}
