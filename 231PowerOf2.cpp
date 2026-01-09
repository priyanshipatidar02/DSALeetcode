#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if (n==0){
        cout<<"false"<<endl;
        return 0;
    }
    while(n!=1){
        if(n%2==0){
            n/=2;
        }else{
            cout<<"false"<<endl;
            return 0;
        }
        }
        cout<<"true"<<endl;
}