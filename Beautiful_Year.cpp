#include <iostream>
#include <set>
using namespace std;

int main(){
    int y;
    cin>>y;

    while(true){
    y++;
    string year= to_string(y);
    set<char> s(begin(year),end(year));
    for(char c: year){
        s.insert(c);
    }
    if(s.size()==4){
        cout<<year<<endl;
        break;
    }
}
    return 0;
}
