#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;

    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="YES"||s=="yES"||s=="Yes"||s=="yes"||s=="YeS"||s=="yeS"||s=="yEs"||s=="YEs"){
            cout<<"YES";
            cout<<endl;
        }
        else{
            cout<<"NO";
            cout<<endl;
        }
    }
    return 0;
}
