#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int count =0;
    int temp=n;
    do{
    temp/=10;
    count++;
   }while(temp!=0);
    int mul=1;
    int sum=0;
    for (int i=0;i<count;i++){
        int x=pow(10,i);
        int digit=(n/x)%10;
     mul *= digit;
     sum +=digit;
    }
    int result=mul-sum;
    cout<<result;
}