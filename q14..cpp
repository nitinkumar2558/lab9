//[STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.
#include<iostream>
#include<cstring>
using namespace std;


int main() {

string str="nitin";

//loop to print string character by character using the normal index method
	cout<<"string will be"<<endl;
			for(int i=0;i<5;i++)
//output of array[i] with increase in i
			cout <<str.at(i)<<",";
			cout<<endl;



			//the pointer method.
		cout<<"string will be by pointers"<<endl;
		for(int i=0;i<5;i++)			
		cout<<str.at(i)<<",";//str.at(i) is represent individual element
cout<<endl;

}
