#include <iostream>
using namespace std;

void SortArray(int arr[], int size) { sort(arr, arr + size); }

void UniqueElement(int arr[], int size) {
  cout<<"Unique elements are : ";
  for (int i = 0; i < size; i++) {
   int count=0;
   for(int j=0;j<size;j++){
    if(arr[i]==arr[j]){
        count++;
    }
   }
   if(count==1){
    cout<<arr[i]<<" ";
   }
  }
}

int main() {
  int size;
  cout << "enter size of an array : ";
  cin >> size;
  int arr[100];
  cout << "enter elements of an array: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  UniqueElement(arr, size);
  return 0;
}