//[STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.
#include<iostream>
using namespace std;


int main() {

char array[6]={'n','i','t','i','n','\0'};//back slash use

//loop to print string character by character using the normal index method
	cout<<"array will be"<<endl;
			for(int i=0;i<5;i++)
//output of array[i] with increase in i
			cout <<array[i]<<",";
			cout<<endl;



			//the pointer method.
		cout<<"array will be by pointers"<<endl;
		for(int i=0;i<5;i++)			
		cout<<*(array+i)<<",";

}
