#include<iostream>
using namespace std;
void mystrcopy(char string[],char stringcpy[])
{
    char *p=string;
    char *s=stringcpy;
    while(*p!='\0')
    {
        *s=*p;
        p++;
        s++;
    }
    *s='\0';
}

int main()
{
    char string[100];
    char stringcpy[100];
    cout<<"Enter a string: ";
    cin>>string;
//call
    mystrcopy(string,stringcpy);
    cout<<stringcpy<<endl;
    return 0;
}

/*#include<iostream>
using namespace std;
void my_strcpy(char *s, char *t){
    //t = s;
    while (*s=0){
        *t = *s;
        s++; t++;
    }
    *t = '\0';
}

int main(){
    char s[10] = "Hello";
    char t[10];

    cout << "Enter source : ";
    cin >> s;

    my_strcpy(s,t);

    cout << t << endl;

    return 0;
}*/
