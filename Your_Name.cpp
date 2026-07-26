#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(int i=0;i<n;i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }
        bool present=true;
        for(auto x:freq1){
            if(x.second!=freq2[x.first]){
                present=false;
                break;
            }
        }
        if(present){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
