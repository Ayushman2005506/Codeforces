#include <iostream>
#include <cmath>
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
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=ans[i];
        }
        long long x=sqrt(sum);
        if(x*x==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
