#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int a,b,c,d,g,f;
    switch(100){
        case 100:
         a=n/100;
         cout<<"no. of 100rs notes required: "<<a<<endl;
        case 50: 
          b=n-(a*100);
          f=b/50;
          cout<<"no. of 50rs notes required : "<<f<<endl;
        case 20:    
          g=b-(f*50);
          c=g/20;
         cout<<"no. of 20rs notes required: "<<c<<endl;
        case 1: 
          d=g-(c*20);
         cout<<"no. of 1rs notes are required: "<<d<<endl;
    }
    return 0;
}