#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string W;
        cin>>W;
        string s="";
        if(W=="us"){
            cout<<"i"<<endl;
        }
        else{
        for(int i=0;i<W.length()-2;i++){
            s+=W[i];
        }
        s+="i";
        cout<<s<<endl;
        }
    }
    return 0;
}
