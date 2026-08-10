#include <iostream>
#include <vector>
#include <unordered_map>
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
        if(n<3){
            cout<<-1<<endl;
            continue;
        }
        bool found=false;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[ans[i]]++;
        }
        for(auto x:freq){
            if(x.second>=3){
                cout<<x.first<<endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<-1<<endl;
        }
    }
    return 0;
}
