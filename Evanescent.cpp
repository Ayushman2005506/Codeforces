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
    int compressed=1;
    for(int j=0;j<n-1;j++){
        if(s[j]!=s[j+1]){
            compressed++;
        }
    }
    int ans=compressed;
    for(int i=1;i<n-1;i++){
        int curr=compressed;
        if(s[i-1]!=s[i] && s[i]!=s[i+1]){
            if(s[i-1]==s[i+1]){
                curr-=2;
            }
            else{
                curr-=1;
            }
        }
        ans=min(ans,curr);
    }
    cout<<ans<<endl;
 }
 return 0;
}
