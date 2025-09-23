#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int x,y,z;
    x=(k*l)/nl;
    y=c*d;
    z=p/np;

    int result= min({x,y,z})/n;
    cout<<result;

    return 0;

}
