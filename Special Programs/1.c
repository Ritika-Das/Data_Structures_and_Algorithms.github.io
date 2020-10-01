//Write a C function to count positive, negative, odd and even numbers in an array, passed by using pointers. Display these numbers in main( ).

#include<stdio.h>
int positive(int *p,int n)
{
	int i,pos=0;;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>=0)
		{
			pos++;
		}
	}
	return pos;
}
int Even(int *eve,int n)
{
	int i,even=0;;
	for(i=0;i<n;i++)
	{
		if(*(eve+i)%2==0)
		{
			even++;
		}
	}
	return even;
}			
void main()
{
	int n,i,pos,odd,even,neg,array[100];
	printf("Enter the length of array ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	pos=positive(array,n);
	neg=n-pos;
	even=Even(array,n);
	odd=n-even;
	printf("Number of positive numbers present in the array = %d\n",pos);
	printf("Number of negative numbers present in the array = %d\n",neg);
	printf("Number of even numbers present in the array = %d\n",even);
	printf("Number of odd numbers present in the array = %d\n",odd);
}
