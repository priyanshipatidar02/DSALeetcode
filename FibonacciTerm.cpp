#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int a=0;
    int b=1;
    int sum=0;
    for(int i=0;i<n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<"no. at the nth position in fibonacci series : "<<sum<<endl;
}

