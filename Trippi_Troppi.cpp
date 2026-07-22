#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string a,b,c;
        string ans="";
        cin>>a>>b>>c;
        ans+=a[0];
        ans+=b[0];
        ans+=c[0];
        cout<<ans<<endl;
    }
    return 0;
}
