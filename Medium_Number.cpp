#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    vector<int>ans;
    int a,b,c;
    cin>>a>>b>>c;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    sort(ans.begin(),ans.end());
    cout<<ans[1]<<endl;
    }
    return 0;
}
