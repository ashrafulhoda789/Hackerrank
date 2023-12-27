#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long n3 = (n - 1) / 3;
        long long n5 = (n - 1) / 5;
        long long n15 = (n - 1) / 15;

        long long sum = (3 * n3 * (n3 + 1) + 5 * n5 * (n5 + 1) - 15 * n15 * (n15 + 1)) / 2;

        cout << sum << endl;
    }
    return 0;
}
