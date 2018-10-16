//Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 
#include<iostream>
using namespace std;


int main() {
int array[10];
// print array using the normal index method
		for(int i=0;i<10;i++){
			cout<<"Enter the "<<i+1<<"th number"<<endl;
			cin>>array[i];}

		cout<<"array will be"<<endl;
			for(int i=0;i<10;i++)
			cout <<array[i]<<",";
			cout<<endl;
			//the pointer method.
		cout<<"array will be by pointers"<<endl;
		for(int i=0;i<10;i++)			
		cout<<*(array+i)<<",";//array store three thing noof element,datatype,adderess of first element .here array is address of 1st element which is icrease by 1 datatype as i increase and print *(array+i) is data in aderess

		cout<<endl;
			
				
cout<<endl;
	


return 0;



}
