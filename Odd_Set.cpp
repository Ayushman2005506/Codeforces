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
        for(int i=0;i<2*n;i++){
            int a;
            cin>>a;
            ans.push_back(a);
        }
        int even=0;
        int odd=0;
        for(int i=0;i<2*n;i++){
            if(ans[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==odd){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
