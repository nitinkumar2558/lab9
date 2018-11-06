
#include<iostream>
using namespace std;
void strcat(char a[20],char b[5]){
char *p,*q;
   cout<<"first string :"<<endl;
   cin>>a;
   cout<<"second string :"<<endl;
   cin>>b;
   p=a;
   q=b;
   
  //using loop
    while(*p!='\0'){
       *p=*a;
       cout<<p;
       *p='\0';
       }
    
    
   
    
		while(*q!='\0'){
		if(*p='\0'){
		*p=*q;
		cout<<p;}
		
		//*p=*q;
		//cout<<p;
		*q='\0';
		*p='\0';
      }
      
      
     
    
  /*cout<<"resulting string is :";
   while(*p!=0){
	   cout<<*p ;
    p++;}*/
    
  
}
int main(){ 
	char a[20],b[5];
   strcat(a,b);
cout<<endl;
 return 0;
}

