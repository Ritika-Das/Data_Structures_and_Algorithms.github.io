//Write a C function to find the frequency of a particular number in a list of integers, passed by using pointer.

#include<stdio.h>
int frequency(int *f,int n,int num)
{
	int i,freq=0;
	for(i=0;i<n;i++)
	{
		if(*(f+i)==num)
		{
			freq++;
		}
	}
	return freq;
}			
void main()
{
	int n,num,i,array[100],freq;
	printf("Enter the length of array ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the number whose frequency is to be checked ");
	scanf("%d",&num);
	freq=frequency(array,n,num);
	printf("Frequency of the number %d is = %d\n",num,freq);
}
