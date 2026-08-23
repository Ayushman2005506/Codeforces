#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int>ans;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            ans.push_back(a);
        }
        int maximum=0;
        for(int i=0;i<n;i++){
            if(ans[i]>maximum){
                maximum=ans[i];
            }
        }
        int b=0;
        for(int i=0;i<n;i++){
            b=max(b,maximum-ans[i]);
        }
        cout<<b<<endl;
    }
    return 0;
}
