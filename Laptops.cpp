#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ans.push_back({a,b});
    }
    sort(ans.begin(),ans.end());
    bool special=false;
    for(int i=1;i<ans.size();i++){
        if(ans[i][1]<ans[i-1][1]){
            special=true;
            break;
        }
    }
    if(special){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}
