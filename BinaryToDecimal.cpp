#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int digit;
    int sum=0;
    int i=0;
    while (n!=0){
        int x=pow(2,i);
        int a=n%10;
        digit=a*x;
        sum+=digit;
        n/=10;
        i++;
        
    }
    cout<<sum<<endl;
    return 0;
}