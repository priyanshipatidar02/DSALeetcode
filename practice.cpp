#include<iostream>
#include<cmath>
using namespace std ;
// void PowerOfNum(){
//     int a, b;
//      cout<<"enter a and b: "<<endl;
//     cin>>a>>b;
//     int num=pow(a,b);
//     cout<<"Answer is : "<<num<<endl;
   
// }
// int main(){
//     PowerOfNum();
//     PowerOfNum();
//     PowerOfNum();
//     PowerOfNum();
//     PowerOfNum();
// }





// bool isPrime(int num){
// for(int i=2;i<num;i++){
//     if(num%i==0){
//         return 0;
//     }
// }
// return 1;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;

//     if(isPrime(n)){
//         cout<<"it is prime no."<<endl;

//     }else{
//         cout<<"not a prime no."<<endl;
//     }
// }




// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter array size: ";
//     cin>>n;
//     int arr[200];
//     cout<<"enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<"Sum of all the elements of array is : "<<sum<<endl;
// }
bool Search(int arr[],int n,int num){
      for(int i=0;i<n;i++){
        if(arr[i]==num){
        
        return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter size of an array: ";
    cin>>n;
    int arr1[100];
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int num;
    cout<<"enter num you want to find in an array : ";
    cin>>num;
    bool found=Search(arr1,n,num);
    if (found){
        cout<<"found";
    }else{
        cout<<"not found";
    }
  
}