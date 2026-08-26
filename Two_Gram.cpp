#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int count[26][26] = {};
 
    for(int i = 0; i < n - 1; i++) {
        count[s[i] - 'A'][s[i + 1] - 'A']++;
    }
 
    int maximum = 0;
    string ans;
 
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            if(count[i][j] > maximum) {
                maximum = count[i][j];
 
                ans = "";
                ans += char(i + 'A');
                ans += char(j + 'A');
            }
        }
    }
 
    cout << ans;
 
    return 0;
}
