#include <iostream>
using namespace std;

int main(){
    int t;
    long long a,b;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>a>>b;
        long long r=a%b;
        if(r==0){
            cout<<0<<endl;
        }
        else{
            cout<<(b-r)<<endl;
        }
    }
    return 0;
}
