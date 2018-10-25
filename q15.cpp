#include<iostream>
using namespace std;



int main()  {

//input of sting/array

		char array[11]="bhubneswar";
		cout<<array<<endl;
	//defining ...char...poiter to point adresses of array
		char *chrptr;
//* just define pointer &nothing else
		chrptr=array;
//need not to initialise array is address of first
//printing array by dropping one by one from strat
		while(*chrptr!='\0'){
		cout<<chrptr<<endl;//print pointer
		*chrptr++;//???no effect before and after puting *
}




//for printing individual by passing adress to pointer
/*
//defining ...char...poiter to point adresses of array
char *chrptr=array;
//need not to initialise array is address of first
//printing array by dropping one by one from strat
	while(*chrptr!='\0'){
	cout<<*chrptr++<<endl;//* represent value in address of array
	
}
b
h
u
b
n
e
s
w
a
r


*/
//simple
/*
int main(){
char str[20];
cin>>str;
char*p;
p=str;
while(*p!='\0'){
cout<<p;
p++;
}
}        */ }
