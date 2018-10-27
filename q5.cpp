//print inverse of string of characters

#include<iostream>
#include<cstring>
using namespace std;

int main(){

cout<<"here string of characters is ...bhubneswar..."<<endl;
char str[11]="bhubneswar";

cout<<"it's reverse is as follows...."<<endl;



for(int i=10;i>-1;i--){
char*ptr= &str[i];


cout<<*ptr;
ptr--;

}
cout<<endl;
}
