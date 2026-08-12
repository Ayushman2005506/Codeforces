#include <iostream>
#include <algorithm>
#include <vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    int min=INT_MAX;
    for(int i=0;i<ans.size();i++){
        if(abs(ans[i])<min){
            min=abs(ans[i]);
        }
    }
    cout<<min<<endl;
    return 0;
}
