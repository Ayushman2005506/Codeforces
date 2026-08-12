#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int>ans;
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        ans.push_back(s1);
        ans.push_back(s2);
        ans.push_back(s3);
        ans.push_back(s4);
        
        sort(ans.begin(),ans.end());
        int a=ans[3];
        int b=ans[2];
        int c=max(s1,s2);
        int d=max(s3,s4);
        
        if((a==c && b==d)||(a==d && b==c)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
