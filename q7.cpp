
//program for max value in double array ,function return pointer
#include<iostream>
using namespace std;
//prototype of function
double *max(double*,int );
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
			if(x == 0){ return 0;}//size is zero ,array is empty 
				
			else{
			
				
				double *ptr = aarray;//pointer point 1st element
				double *furthermore = aarray + 1;//pointer point 2nd element
				
				double max = *aarray;
				for(int i= 0; i<x; i++){
					if (*furthermore > max){//if greter new max is value in furthermore
					max = *furthermore;
					ptr = furthermore;}//max is first element compare with futhermore,it increasing 1 by 1
					furthermore++;
						}
				return ptr;}//new pointer for return
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
