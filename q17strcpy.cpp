//nitin
//kumar
//copy of strings

#include<iostream>
using namespace std;

int main()
{
    char a[5];
    char b[5];
	cout<<"Enter 1st string of 5 elements: ";
    cin>>a;
/*int size1st;
size1st=sizeof(a)/sizeof(a[0]);
cout<<size1st<<endl;*/


cout<<"Enter 2nd string of similar size: ";
    cin>>b;

//two pointers
char *p=a;
char*q=b;

	cout<<"   now your 1st string"<<endl;
	for(int i=0;i<5;i++){
	p=q;
	cout<<*p;//a=p printing new a array
	p++;
	}



cout<<endl;
		cout<<"  now your 2nd string"<<endl;
		for(int j=0;j<5;j++){
		b[j]=a[j];
		cout<<b[j];//printing new b array
		
		}




}
