#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2!=0){
                cout<<"#";
            }

            else if(i%4==2){
                for(j=1;j<m;j++){
                    cout<<".";
                }
                if(j==m){
                    cout<<"#";
                }
            }

            else{
                if(j==1){
                    cout<<"#";
                }
                for(j=2;j<=m;j++){
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
