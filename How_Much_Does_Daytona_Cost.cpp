#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        bool found=false;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==k){
                found=true;
            }
        }
        if(found){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
