//Write a C function to remove duplicate elements in a list of integers, passed by using pointer.

#include<stdio.h>
int duplicate(int *d,int n)
{
	int i,j,freq=0,k;
	for(i=0;i<n-freq;i++)
	{
		for(j=0;j<n-freq;j++)
		{
			if(i!=j && *(d+j)!=0)
			{
				if(*(d+i)==*(d+j))
				{
					freq++;			
					for(k=j;k<n-1;k++)
  			       		{					
						*(d+k)=*(d+(k+1));
					}

				}	
			}
		}
	}
	return freq;
}			
void main()
{
	int n,i,array[100],freq;
	printf("Enter the length of array ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	freq=duplicate(array,n);
	printf("After deleting duplicate elements : \n");
	for(i=0;i<(n-freq);i++)
	{
		printf("%d,",array[i]);
	}
}
