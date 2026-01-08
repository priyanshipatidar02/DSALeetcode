#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"enter n :";
    cin>>n;
    int bits=0;
    long long temp=n;
    while(temp!=0){
        bits++;
        temp/=2;
    }
    if(bits>32){
        cout<<"0"<<endl;
        return 0;
    }
            int rev =0;
            while(n!=0){
                
                int digit=n%10;
                rev=rev*10+digit;
                n/=10;
             }
    cout<<rev;
    cout<<endl;
    
}
