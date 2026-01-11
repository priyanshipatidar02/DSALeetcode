#include <iostream>
using namespace std;
void MinElement(int arr[], int size) {
  int min = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  cout << "Minimum element in array is : " << min << endl;
}
int main() {
  int n;
  cout << "enter size of an array: ";
  cin >> n;
  int arr[100];
  cout << "enter elements of an array : ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  MinElement(arr, n);
  return 0;
}