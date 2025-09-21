#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector <string> s;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)==c||(b+c)==a||(c+a)==b){
            s.push_back("YES");
        }
        else{
            s.push_back("NO");
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
