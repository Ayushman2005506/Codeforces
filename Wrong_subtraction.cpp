#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    for(int i=0;i<k;i++){
        int d=n%10;
        if(d!=0){
           n= n-1;
        }
        else{
            n=n/10;
        }
    }
    cout<<n;
    return 0;
}
