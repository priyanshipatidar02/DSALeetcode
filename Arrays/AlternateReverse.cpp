#include <iostream>
using namespace std;
void AlternateReverse(int arr[], int size) {
  int start = 0;
  int alt = 1;
  while (alt < size) {
    swap(arr[start], arr[alt]);
    start += 2;
    alt += 2;
  }
}

void PrintArray(int arr[], int n) {
  cout<<"Alternate element is reversed: "<<endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  int n;
  cout << "enter size of an array: ";
  cin >> n;
  int arr1[100];
  cout << "enter elements : ";
  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }
  AlternateReverse(arr1, n);
  PrintArray(arr1, n);
}