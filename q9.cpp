
//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.

#include<iostream>
using namespace std;

bool truefalse(char *p,char c){
   while(*p!='\0')
    {   if(*p==c)  { return 1;}//it just find character present in array
        p++;
    }
    return 0;//nothing is equal to c
}

int main()
{
    char a[100],c;
    cout<<"Enter a  string: ";
    cin>>a;
    cout<<"Enter the character which you want to check: ";
    cin>>c;
    char *p=a;
    bool t=truefalse(a,c);
    if(t==1)  {cout<<c<<" is present in "<<a<<endl;}

    else {cout<<c<<" is not present in "<<a<<endl;}
   
        return 0;
}
