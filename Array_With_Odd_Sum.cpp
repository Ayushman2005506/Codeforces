#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int>ans;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            ans.push_back(a);
        }
        int even=0;
        int odd=0;
        for(int j=0;j<ans.size();j++){
            if(ans[j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd==0 && even!=0){
            cout<<"NO"<<endl;
        }
        else if(odd!=0 && even==0){
            if(odd%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
