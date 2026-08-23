#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        if(arr[0]!=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
