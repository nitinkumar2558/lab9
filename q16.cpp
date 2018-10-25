#include<iostream>
//#include<cstring>
using namespace std;
int main(){

char array[11]="bhubneswar";

char *ptr;
ptr=array;

for(ptr=&array[9];*ptr!='\0';ptr--){
//assignig poiter to address of array[9] which is ..r.. and print it then decrease the address one by one 
cout<<ptr<<endl;}

//we got printing start from ..r.. 
/*
r
ar
war
swar
eswar
neswar
uneswar
hu.....*/









}
