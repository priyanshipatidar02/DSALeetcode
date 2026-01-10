#include<iostream>
using namespace std;
int SetBits(int n){
    int count =0;
     while(n!=0){
    if(n%2==1){
        count++;
        }
    n/=2;
    }
    return count;
}
int main(){
    int a,b;
    cout <<"enter a and b : ";
    cin>>a>>b;
    int bit1=SetBits(a);
    int bit2=SetBits(b);
    int result=bit1+bit2;
    cout<<"Total set bits in a and b are : "<<result<<endl;
    return 0;
}