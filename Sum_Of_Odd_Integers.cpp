#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k;
        cin>>n>>k;
        if(n< 1LL*k*k){
            cout<<"NO"<<endl;
        }
        else if(n%2!=0){
            if(k%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(k%2!=0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
