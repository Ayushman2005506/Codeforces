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
        int count=0;
        int result=0;
        for(int i=0;i<n;i++){
            if(ans[i]==0){
                count++;
            }
            else{
                result=max(result,count);
                count=0;
            }
        }
        result=max(result,count);
        cout<<result<<endl;
    }
    return 0;
}
