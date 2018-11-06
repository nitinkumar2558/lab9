//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.  

#include<iostream>
using namespace std;

int countEven(int* ,int );
int main() {


int array[5]={4,56,76,75};


int p= countEven( array,5);
cout<<p;
}

int countEven(int *a, int b){
	int evencount = 0;
	for(int i = 0; i <=b; i++){
	if(*(a+i)%2 == 0){
	evencount++;}}
	return evencount-1;
}



/*

int countEven(int *a, int b){
	int m = 0;
	for(int i = 0; i <=b; i++){      ////why wrong its output is 4
	if(*(a+i)%2 == 0){
	m++;}}
	return m-1;//m is evan count
}*/


/*int countEven(int a[],int n)
  { int e=0; 
   for(int i=0;i<n;i++){
    if(a[i]%2==0)                   //why wrong its output is 4
     e+=1;}
    return e;
  }


*/


