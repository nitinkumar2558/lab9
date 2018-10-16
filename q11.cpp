//. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
#include<iostream>
using namespace std;


int main () {

//declare variables of all predefined sizes 
int a;
char b;
bool w=0;
double s;
float d;
short h;
long k;

int *a1=&a;
char *b1=&b;
bool *bo=&w;
double *s1=&s;
float *d1=&d;
short *h1=&h;
long *k1=&k;

cout<<"size of int variable  " << sizeof(a)<<"size of int pointer variable  "<<sizeof(a1)<<endl;
cout<<"size of char variable  " << sizeof(b)<<"size of char pointer variable  "<<sizeof(b1)<<endl;
cout<<"size of bool variable  " << sizeof(w)<<"size of bool pointer variable  "<<sizeof(bo)<<endl;
cout<<"size of double variable  " << sizeof(s)<<"size of double pointer variable  "<<sizeof(s1)<<endl;
cout<<"size of float variable  " << sizeof(d)<<"size of flaot pointer variable  "<<sizeof(d1)<<endl;
cout<<"size of short variable  " << sizeof(h)<<"size of short pointer variable  "<<sizeof(h1)<<endl;
cout<<"size of long variable  " << sizeof(k)<<"size of long pointer variable  "<<sizeof(k1)<<endl;










return 0;
}
