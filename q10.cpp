//revstring function

#include<iostream>
#include<cstring>
using namespace std;

void revString(char* ptr);

int main()
{
cout<<"here string is ........abcde.."<<endl;
  char s[10] = "abcde";
  revString(&s[4]);  /*call the function by sending address of ..e..
		  s[4] is e and &s[4] is address of e  where s is 			array*/
  return 0;
}

void revString(char* ptr)
{
  while(*ptr!='\0'){
cout<<*ptr;
ptr--;
}
cout<<endl;
}
