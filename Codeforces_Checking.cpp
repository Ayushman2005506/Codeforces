#include <iostream>
using namespace std;
int main(){
    string s="codeforces"; 
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char c;
        cin>>c;
        if(s.find(c)!=-1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
