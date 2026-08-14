#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    int high=0;
    for(int i=0;i<n;i++){
        high=max(high,ans[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        count+=(high-ans[i]);
    }
    cout<<count<<endl;
    return 0;
}
