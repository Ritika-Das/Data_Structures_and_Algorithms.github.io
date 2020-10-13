#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
int l; int f;
char s,before[10],after[10]; char alpha[10],beta[10]; 
cout<<"\n Enter starting symbol:"; cin>>s;
cout<<"\n Enter string before production:"; cin>>before;
cout<<"\n Enter string after production:"; cin>>after;
f=strlen(before); l=strlen(after); int j=0,k=0; if(s==before[0])
{
for(int i=1;i<f;i++)
{
alpha[j]=before[i]; j++;
}
}
for(int i=0;i<l;i++)
{
beta[k]=after[i]; k++;
}
alpha[j]='\0';
beta[k]='\0';
cout<<"\n Your production:"<<s<<"->"<<before<<"|"<<after; cout<<"\n\t Alpha:"<<alpha;

cout<<"\n\t beta:"<<beta; cout<<"\n"<<s<<"->"<<beta<<s<<"'";
cout<<"\n"<<s<<"'->"<<alpha<<s<<"'"<<"|"<<"NULL";
getch(); return 0;
}
