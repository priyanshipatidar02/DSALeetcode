#include <iostream>
using namespace std;

void SortArray(int arr[], int size) { sort(arr, arr + size); }

void DuplicateElement(int arr[], int size) {
    SortArray(arr,size);
  cout << "duplicate elements are : ";
  for (int i = 0; i < size; i++) {
    int count = 0;
    for (int j = i+1; j < size; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    if (count>= 1) {
      cout << arr[i] << " ";
    }
    i+=count;
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

  DuplicateElement(arr, size);
  return 0;
}