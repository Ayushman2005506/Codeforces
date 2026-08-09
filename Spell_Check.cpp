#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    string name="Timur";
    unordered_map<char,int>freq1;
    for(char c:name){
        freq1[c]++;
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5){
            cout<<"No"<<endl;
            continue;
        }
        unordered_map<char,int>freq2;
        for(char c:s){
            freq2[c]++;
        }
        if(freq1==freq2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
