//Write a C function to concatenate two strings passed using pointers.

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
void concatenate(char *s,char *s1,char *s2,int len,int len1)
{
	int i,j=0;
	for(i=0;i<=(len+len1);i++)
	{
		if(i<len)
		{
			*(s2+i)=*(s+i);
		}
		else if(i==len)
		{
			*(s2+i)=' ';
		}
		else
		{
			*(s2+i)=*(s1+j);
			j++;
		}
	}
	*(s2+i)='\0';
}
void main()
{
	char s[100],s1[100],s2[200];
	int len,len1;
	puts("Enter the 1st string ");
	gets(s);
	puts("Enter the 2nd string ");
	gets(s1);
	len=length(s);
	len1=length(s1);
	concatenate(s,s1,s2,len,len1);
	puts(s2);
}
