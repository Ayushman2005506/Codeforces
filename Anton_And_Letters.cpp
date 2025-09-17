#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    set <char> st;

    for(char c:s){
        if('a'<=c && c<='z'){
            st.insert(c);
        }
    }

    cout<<st.size();

    return 0;
}
