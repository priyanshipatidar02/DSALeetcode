#include<iostream>
using namespace std;
void ReverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    }
    int PrintArray(int arr[],int n){
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
    ReverseArray(arr1,n);
    PrintArray(arr1,n);
}