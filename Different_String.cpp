#include <iostream>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        set<char>a;
        for(int i=0;i<s.size();i++){
            a.insert(s[i]);
        }
        if(a.size()==1){
            cout<<"No"<<endl;
        }
        else{
            bool found=false;
            for(int i=0;i<s.size();i++){
                for(int j=i+1;j<s.size();j++){
                    if(s[i]!=s[j]){
                        swap(s[i],s[j]);
                        cout<<"Yes"<<endl;
                        cout<<s<<endl;
                        found=true;
                        break;
                    }
                }
                if(found){
                        break;
                    }
            }
        }
    }
    return 0;
}
