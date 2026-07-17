#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    unordered_map<char,int>freq;
    unordered_map<char,int>letter;
    for(int i=0;i<a.length();i++){
        freq[a[i]]++;
    }
    for(int i=0;i<b.length();i++){
        freq[b[i]]++;
    }
    for(int i=0;i<c.length();i++){
        letter[c[i]]++;
    }
    for(auto x:letter){
        if(x.second!=freq[x.first]){
            cout<<"NO";
            return 0;
        }
    }
    for(auto x:freq){
        if(x.second!=letter[x.first]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}

