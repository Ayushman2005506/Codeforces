#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(char c:s){
            ans=max(ans,c-'a');
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
