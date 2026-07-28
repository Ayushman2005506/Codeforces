#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=a;
    while(a>=b){
        ans+=(a/b);
        a=a/b+a%b;
    }
    cout<<ans;
    return 0;
}
