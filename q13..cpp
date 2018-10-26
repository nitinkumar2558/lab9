//Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 
#include<iostream>
using namespace std;


int main() {
int array[10];

//three loop used 1st -input,2nd-output,3rd-output by pointer


// print array using the normal index method
		for(int i=0;i<10;i++){
			cout<<"Enter the "<<i+1<<"th number"<<endl;//i+1 to tell just enter no from 1
			cin>>array[i];}

		cout<<"array will be"<<endl;
			for(int i=0;i<10;i++)
			cout <<array[i]<<",";
			cout<<endl;


			//the pointer method.
	cout<<"by using poiter execute value inside it and printarray"<<endl;    
		for(int i=0;i<10;i++)			
		cout<<*(array+i)<<",";//array store three thing noof element,datatype,adderess of first element .here array is address of 1st element which is icrease by 1 datatype as i increase and print *(array+i) is data in aderess

		cout<<endl;

	


return 0;



}
