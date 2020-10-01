// Write a C function to merge two sorted arrays into another array in a sorted order, passed by using pointer.

#include<stdio.h>
void sort(int *a,int *b,int *c,int n,int n1)
{
	int x,i,j=0;
	for(i=0;i<(n+n1);i++)
	{
		if(i<n)
		{
			*(c+i)=*(a+i);
		}
		else
		{
			*(c+i)=*(b+j);
			j++;
		}
	}
	for(i=1;i<(n+n1);i++)
	{
		for(j=0;j<(n+n1)-i;j++)
		
		{
			if(*(c+j)>*(c+(j+1)))
			{				
				x=*(c+j);
				*(c+j)=*(c+(j+1));
				*(c+(j+1))=x;
			}
		}
	}
}
void main()
{
	int A[100],B[100],C[200],n,n1,i,j,x;
	printf("Enter the length of 1st array ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the length of 2nd array ");
	scanf("%d",&n1);
	printf("Enter %d elements ",n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&B[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(A[j]>A[j+1])
			{				
				x=A[j];
				A[j]=A[j+1];
				A[j+1]=x;
			}
		}
	}
	for(i=1;i<n1;i++)
	{
		for(j=0;j<n1-i;j++)
		{
			if(B[j]>B[j+1])
			{				
				x=B[j];
				B[j]=B[j+1];
				B[j+1]=x;
			}
		}
	}
	sort(A,B,C,n,n1);
	printf("Sorted array after merging : \n");
	for(i=0;i<(n+n1);i++)
	{
		printf("%d,",C[i]);
	}
}
