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
int compare(char *s,char *s1,int len)
{
	int i,ascii=0,ascii_=0;
	for(i=0;i<len;i++)
	{
		if(*(s+i)!=*(s1+i))
		{
			ascii=ascii+(int)*(s+i);
			ascii_=ascii_+(int)*(s1+i);	
		}		
	}
	ascii=ascii-ascii_;
	return ascii;
}
void main()
{
	char s[100],s1[100];
	int len,len1,comp;
	puts("Enter the 1st string ");
	gets(s);
	puts("Enter the 2nd string ");
	gets(s1);
	len=length(s);
	len1=length(s1);
	if(len==len1)
	{
		comp=compare(s,s1,len);
		if(comp==0)
		{
			puts("Two strings are equal.");
		}
		else
		{
			puts("Two strings are not equal.");
		}	
	}
	else
	{
		puts("Two strings are not equal.");
	}
}
