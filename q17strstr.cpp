
#include<iostream>
using namespace std;

int fstrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{i++;p++;}
	return i;
}

int fstrstr(char a[],char b[])
{
	char *p,*q,*r;
	int l=fstrlen(b),n=fstrlen(a);
	l=n-l+1;
	p=a;
	while(*p!=a[l])
	{
	q=b;
	if(*p==*q)
	{
	r=p;
	while(*q==*r && *q!='\0')
	{r++;q++;}
	if(*q=='\0')
	return 1;
		 }
	p++;
 }
	return 0;
}
int main()
{
		int k;
		char a[15],b[15];
		cout<<"\n Enter  first string please";
		cin>>a;
		cout<<"\n Enter  second string please ";
		cin>>b;
		k=fstrstr(a,b);
	
		if (k==1)
		   cout<<"\n The second one is a substring of first string";
	
		else 
		   cout<<"\n The second string is not a substring of first string";
	   return 0;
} 










