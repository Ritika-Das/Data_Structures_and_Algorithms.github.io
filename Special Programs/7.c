//Write a C function to find the length of string using pointers.

#include<stdio.h>
int length(char *s)
{
	int i=0;
	while(*(s+i)!='\0')
	{
		i++;
	}
	return i;	
}
void main()
{
	char s[100];
	int len;
	puts("Enter the string ");
	gets(s);
	len=length(s);
	printf("Length of String is : %d",len);
}
