#include <iostream>
#include <vector>
using namespace std;
int  main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<vector<int>>ans;
        for(int j=0;j<n;j++){
            int a,b;
            cin>>a>>b;
            ans.push_back({a,b});
        }
        int maxQuality=0;
        int winner=0;

        for (int j=0;j<ans.size();j++) {
            if (ans[j][0]<=10 && ans[j][1]>maxQuality) {
                maxQuality=ans[j][1];
                winner=j+1;
            }
        }
        cout<<winner<<endl;
    }
    return 0;
}
