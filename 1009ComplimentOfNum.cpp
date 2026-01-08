#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;

    if (n == 0) {
        cout << 1;
        return 0;
    }

    vector<int> v;

    // decimal → binary
    while (n != 0) {
        v.push_back(n % 2);
        n /= 2;
    }

    // flip bits
    for (int i = 0; i < v.size(); i++) {
        v[i] = 1 - v[i];
    }

    // binary → decimal
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i] * (1 << i);
    }

    cout << sum;
}
