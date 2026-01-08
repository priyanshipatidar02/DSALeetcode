#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    vector<int>v;
    while(n!=0){
       int a=n%2;
        v.push_back(a);
        n/=2;
    }
    int num=0;
    for(int i=v.size()-1;i>=0;i--){
        num=num*10+v[i];
    }
    cout<<num<<endl;
    
}