#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>ans;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            ans.push_back(a);
        }
        sort(ans.begin(),ans.end());
        bool possible=true;
        for(int j=0;j<ans.size()-1;j++){
            if(ans[j+1]-ans[j]>1){
                possible=false;
                break;
            }
        }
        if(possible){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
