#include<iostream>
using namespace std ;
int main (){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    char operation;
    cout<<"enter operation you want to perform : ";
    cin>>operation; 
    switch(operation){
case '*':
cout<<a*b<<endl;
break;
case '+':
cout<<a+b<<endl;
break;
case '-':
cout<<a-b<<endl;
break;
case '/':
cout<<a/b<<endl;
break;
case '%':
cout<<a%b<<endl;
break;
default:cout<<"invalid"<<endl;
    }
}