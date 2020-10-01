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
void reverse(char *s,int len)
{
	int i,j=0;
	char x;
	for(i=len-1;i>=0;i--)
	{
		if(i>=j)
		{
			x=*(s+j);				
			*(s+j)=*(s+i);
			*(s+i)=x;
		}
		j++;
	}
	*(s+len)='\0';
}
void main()
{
	char s[100];
	int len;
	puts("Enter the string ");
	gets(s);
	len=length(s);
	reverse(s,len);
	puts("Reversed string :");
	puts(s);
}
