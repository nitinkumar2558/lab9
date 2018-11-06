//including library
#include<iostream>
using namespace std;
//function declaration
int strlen(char a[]){
	char *p;
	int i=0;
	p=a;
	while(*p!='\0'){
	i++;p++;}
	return i;
}
int main(){
	int k;
	char a[15]={'h','e','l','l','o'};
	k=strlen(a);
    cout<<"hello "<<" this is our string"<<endl;
	cout<<"The length of string is "<<k<<endl;
return 0;
}
