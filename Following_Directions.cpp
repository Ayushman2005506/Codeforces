#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int x = 0, y = 0;
        bool found = false;
 
        for (char c : s) {
            if (c == 'U')
                y++;
            else if (c == 'D')
                y--;
            else if (c == 'R')
                x++;
            else if (c == 'L')
                x--;
 
            if (x == 1 && y == 1) {
                found = true;
                break;
            }
        }
 
        cout << (found ? "YES" : "NO") << endl;
    }
 
    return 0;
}
