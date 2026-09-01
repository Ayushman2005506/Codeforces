#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a = 1;
        int b = 1;
        int c = n - 2;

        if (c > 26) {
            b += c - 26;
            c = 26;
        }

        cout << char('a' + a - 1)
             << char('a' + b - 1)
             << char('a' + c - 1)
             << endl;
    }

    return 0;
}
