#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a="codeforces";
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<a.length();i++){
            if(s[i]!=a[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
