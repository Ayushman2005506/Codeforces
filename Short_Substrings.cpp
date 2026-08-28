#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string b;
        cin>>b;
        int n=b.length();
        string a="";
        a+=b[0];
        for(int i=1;i<n-1;i+=2){
            a+=b[i];
        }
        a+=b[n-1];
        cout<<a<<endl;
    }
    return 0;
}
