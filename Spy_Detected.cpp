#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            ans.push_back(a);
        }
        if(ans[0]!=ans[1] && ans[1]==ans[2]){
            cout<<1<<endl;
            continue;
        }
        int b=ans[0];
        for(int i=1;i<n;i++){
            if(ans[i]!=b){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
