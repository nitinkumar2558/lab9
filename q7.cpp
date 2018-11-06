//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.


#include<iostream>
using namespace std;
//prototype of function
double *max(double*,int );

int main(){

double array[5]={56,87,34,645};
double*p=max(array,5);//call
cout<<"maximum value of array is"<<endl;
cout<<*p<<endl;


}
double* max(double*aarray,int x){
	if(x == 0){
	return 0;}
	else{
			double *b;
				double max = *aarray;
				double *ptr = aarray;
	
				b = aarray + 1;
				for(int i= 0; i<x; i++){
					if (*b > max){
					max = *b;
					ptr = b;}//max is first element compare with b ,1 more than that

					b++;
	}
	return ptr;
}
}






/*
double *maximum(double a[],int size)
  {double *d,max=0;
   if(size==0)
    {d=NULL;
    return d;}
   for(int i=0;i<size;i++)
{   if(a[i]>max)
    { max=a[i];d=&a[i];}    
}
   return d;
  }*/
