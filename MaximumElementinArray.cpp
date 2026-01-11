#include<iostream>
using namespace std;
void MaxElement(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"maximum element is "<<max<<endl;
  
}

int main(){
    int size;
    cout<<"enter size of an array : ";
    cin>>size;
    int arr[100];
    cout<<"eneter elements of an array: ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    MaxElement(arr,size);
}