/*Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.*/


#include<iostream>
using namespace std;

int main() {
//declare two variables a,b
int a,b;

int *p=&a;
//store the value pointed by p in b
 b=*p;

cout<<" a is "<<a<<" b is "<<b<<" *p is "<<*p<<endl;

//Assign values a=2 and b = 3.
a=2;
b=3;
b=*p;
cout<<" a is "<<a<<" b is "<<b<<" *p is  "<<*p<<endl;

return 0;
}
