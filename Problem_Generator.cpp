#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        unordered_map<char,int>freq;
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        int ans=0;
        for(char c='A';c<='G';c++){
            if(freq[c]<m){
                ans+=(m-freq[c]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
