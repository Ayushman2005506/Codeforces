#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    char current='a';
    for(char c:s){
        int a=abs(c-current);
        count+=min(a,26-a);
        current=c;
    }
    cout<<count;
    return 0;
}
