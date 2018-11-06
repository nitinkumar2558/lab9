
#include<iostream>
using namespace std;
int strchr(char a[],char i)
{
	char *p;int n=0;
	p=a;
	while(*p!='\0')
	{
		if(*p==i)
		n++;
		p++;
	}
	return n;
}
int main()
{
		char a[15],i;
		int k;
		cout<<"Enter the string "<<endl;
		cin>>a;
		cout<<"Enter the character you want to look "<<endl;
		cin>>i;
		k=strchr(a,i);
		cout<<"no of times the character repeated in the string = "<<k;
		return 0;
}
