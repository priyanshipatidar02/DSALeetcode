#include<iostream>
using namespace std;
int main(){
    long long x;
    cout<<"enter x :";
    cin>>x;
    int bits=0;
    long long temp=x;
    while(temp!=0){
        bits++;
        temp/=2;
    }
    if(bits>32){
        cout<<"0"<<endl;
        return 0;
    }
            int rev =0;
            while(x!=0){
                
                int digit=x%10;
                rev=rev*10+digit;
                x/=10;
             }
    cout<<rev;
    cout<<endl;
    
}
