#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string ans="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                char c;
                cin>>c;
                if(c!='.'){
                    ans+=c;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
} 
