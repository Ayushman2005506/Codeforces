#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i<=1000000;i*=10){
            for(int j=1;j<=9;j++){
                if(i*j<=n){
                    ans++;
                }
                else{
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
