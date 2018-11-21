
//to find length of string

#include<iostream>
using namespace std;
int myStrlen(char *p)
{
    int count=0;

    while(*p!='\0')//till array element is null it run
    {
        p++;
        count++;//number of time it run equal number of element in array
    }
    return count;
}

int main()
{
    char string[50];
    cout<<"Enter a string: ";
    cin>>string;
    char *p=string;
    cout<<"The length of the string is: "<<myStrlen(p)<<endl;
    return 0;
}
