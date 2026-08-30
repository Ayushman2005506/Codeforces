#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=n;
    int a=n/m;
    int rem=n%m;
    while(a>0){
        ans+=a;
        int total=a+rem;
        a=total/m;
        rem=total%m;
    }
    cout<<ans;
    return 0;
}
