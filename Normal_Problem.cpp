#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string a;
        cin>>a;
        string ans="";
        for(int i=a.length()-1;i>=0;i--){
            if(a[i]=='p'){
                ans+='q';
            }
            else if(a[i]=='q'){
                ans+='p';
            }
            else{
                ans+=a[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
