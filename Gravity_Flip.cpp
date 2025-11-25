#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }

    sort(vec.begin(),vec.end());

    for(int num: vec){
        cout<<num<<" ";
    }
    return 0;
}
