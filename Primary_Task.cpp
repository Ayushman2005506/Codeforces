#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        string s=to_string(a);
        if(s.length()>=3 && s[0]=='1'&&s[1]=='0'&&s[2]!='0'){
            int x=stoi(s.substr(2));
            if(x>=2){
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
