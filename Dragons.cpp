#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ans.push_back({a,b});
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        if(s<=x.first){
            cout<<"NO"<<endl;
            return 0;
        }
        s+=x.second;
    }
    cout<<"YES"<<endl;
    return 0;
}
