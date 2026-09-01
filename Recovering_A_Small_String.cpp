#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a = max(1, n - 52);
        int b = max(1, n - a - 26);
        int c = n - a - b;

        cout << char('a' + a - 1)
             << char('a' + b - 1)
             << char('a' + c - 1)
             << endl;
    }

    return 0;
}
