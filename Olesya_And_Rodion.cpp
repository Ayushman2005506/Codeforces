#include <iostream>
using namespace std;
 
int main() {
    int n, t;
    cin >> n >> t;
 
    if (n == 1) {
        if (t == 10)
            cout << -1;
        else
            cout << t;
    }
    else {
        if (t == 10) {
            cout << 1;
            for (int i = 1; i < n - 1; i++)
                cout << 1;
            cout << 0;
        }
        else {
            cout << t;
            for (int i = 1; i < n; i++)
                cout << 0;
        }
    }
 
    return 0;
}
