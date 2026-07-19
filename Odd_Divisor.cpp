#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n%2!=0){
            cout<<"Yes"<<endl;
        }
        else{
            if((n&(n-1))==0){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
