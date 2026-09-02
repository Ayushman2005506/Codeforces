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
        vector<int>ans;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        int l=0;
        int r=arr.size()-1;
        while(l<r){
            ans.push_back(arr[l]);
            ans.push_back(arr[r]);
            l++;
            r--;
        }
        if(l==r){
            ans.push_back(arr[l]);
        }
        for(int x:ans){
            cout<<x<<" ";
        }       
            cout<<endl;
        }
    return 0;
}
